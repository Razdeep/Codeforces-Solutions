// https://codeforces.com/contest/1341/problem/B
#include <iostream>
#include <vector>
#include <climits>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        vector<int> mountains(n);
        vector<bool> is_peak(n, false);

        for (int i = 0; i < n; ++i) {
            cin >> mountains[i];
        }

        for (int i = 1; i + 1 < n; ++i) {
            is_peak[i] = ((mountains[i] > mountains[i - 1]) && (mountains[i] > mountains[i + 1]));
        }

        vector<int> prefix(all(is_peak));

        for (int i = 1; i < n; ++i) {
            prefix[i] += prefix[i - 1];
        }

        int ans_parts = 0, ans_left;
        int max_so_far = INT_MIN;

        for (int i = 0; i + k - 2 < n; ++i) {
            if (prefix[i + k - 2] - prefix[i] > max_so_far) {
                max_so_far = (prefix[i + k - 2] - prefix[i]);
                ans_parts = max_so_far;
                ans_left = i;
            }
        }

        cout << ans_parts + 1 << " " << (ans_left + 1) << endl;
    }

    return 0;
}