// https://codeforces.com/contest/1343/problem/C
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<ll> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        ll ans = 0;

        for (int i = 0; i < n; ) {

            ll cur_max = arr[i];
            int j;

            for (j = i + 1; j < n && (cur_max * arr[j] > 0); ++j) {
                cur_max = max(cur_max, arr[j]);
            }

            ans += cur_max;
            i = j;
        }

        cout << ans << endl;
    }

    return 0;
}