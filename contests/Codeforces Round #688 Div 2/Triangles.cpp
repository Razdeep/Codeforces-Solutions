// https://codeforces.com/contest/1453/problem/C
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<vector<int> > arr(n, vector<int>(n, 0));

    constexpr int NO_OF_DIGITS = 10;

    vector<int> ans(NO_OF_DIGITS, 0);

    vector<int> extreme_down_row(NO_OF_DIGITS, 0);
    vector<int> extreme_up_row(NO_OF_DIGITS, INT_MAX);
    vector<int> extreme_left_column(NO_OF_DIGITS, INT_MAX);
    vector<int> extreme_right_column(NO_OF_DIGITS, 0);

    for (int i = 0; i < n; ++i) {
        string tmp;
        cin >> tmp;

        for (int j = 0; j < n; ++j) {
            int this_digit = arr[i][j] = tmp[j] - '0';

            extreme_down_row[this_digit]		= max(extreme_down_row[this_digit], i);
            extreme_up_row[this_digit]			= min(extreme_up_row[this_digit], i);
            extreme_left_column[this_digit]		= min(extreme_left_column[this_digit], j);
            extreme_right_column[this_digit]	= max(extreme_right_column[this_digit], j);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int this_digit = arr[i][j];

            // Changing a column element
            ans[this_digit] = max(ans[this_digit], max(extreme_right_column[this_digit] - j, j - extreme_left_column[this_digit])
                                                    * max(i, n - i - 1));
            
            // Changing a row element
            ans[this_digit] = max(ans[this_digit], max(extreme_down_row[this_digit] - i, i - extreme_up_row[this_digit])
                                                    * max(j, n - j - 1));
        }
    }

    for (int i = 0; i < NO_OF_DIGITS; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}

