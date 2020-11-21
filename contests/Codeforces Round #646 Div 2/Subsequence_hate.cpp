// https://codeforces.com/contest/1363/problem/B
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string text;
        cin >> text;

        int n = int(text.size());
        vector<int> prefix_zero(n + 1, 0);
        vector<int> prefix_one(n + 1, 0);
        vector<int> suffix_zero(n + 1, 0);
        vector<int> suffix_one(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                prefix_zero[i] = (text[i] == '0');
                prefix_one[i]  = (text[i] == '1');
                continue;
            }
            prefix_zero[i] = prefix_zero[i - 1] + (text[i] == '0');
            prefix_one[i]  = prefix_one[i - 1] + (text[i] == '1');
        }

        for (int i = n - 1; i >= 0; --i) {
            if (i == n - 1) {
                suffix_zero[i] = (text[i] == '0');
                suffix_one[i]  = (text[i] == '1');
                continue;
            }
            suffix_zero[i] = suffix_zero[i + 1] + (text[i] == '0');
            suffix_one[i]  = suffix_one[i + 1] + (text[i] == '1');
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; ++i) {
            ans = min(ans, prefix_one[i] + suffix_zero[i + 1]);
            ans = min(ans, prefix_zero[i] + suffix_one[i + 1]);
        }

        cout << ans << endl;
    }
}