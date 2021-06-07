// https://codeforces.com/contest/1452/problem/B
#include <iostream>
#include <vector>
#define int ll
typedef long long ll;
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        int sum = 0;
        int max_col_height = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
            max_col_height = max(max_col_height, arr[i]);
        }

        int min_boxes_per_row = (sum / (n - 1) + (sum % (n - 1) > 0));
        min_boxes_per_row = max(min_boxes_per_row, max_col_height);

        int ans = (min_boxes_per_row * (n - 1)) - sum;
        cout << ans << endl;
    }
}