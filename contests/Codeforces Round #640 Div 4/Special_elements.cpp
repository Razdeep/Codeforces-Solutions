// https://codeforces.com/contest/1352/problem/E
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
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int ans = 0;

        for (int l = 0; l < n; ++l) {
            int sum = 0;
            for (int r = l; r < n; ++r) {
                sum += arr[r];

                if (l == r) {
                    continue;
                }

                if (sum <= n) {
                    ans += freq[sum];
                    freq[sum] = 0;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}