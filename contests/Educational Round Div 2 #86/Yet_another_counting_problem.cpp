// https://codeforces.com/contest/1342/problem/C
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        ll a, b, queries;
        cin >> a >> b >> queries;

        vector<ll> count(a * b, 0);

        for (ll i = 1; i < a * b; ++i) {
            count[i] = count[i - 1] + ((i % a) % b != (i % b) % a);
        }

        while (queries--) {
            ll left, right;
            cin >> left >> right;

            ll ans = 0LL;
            ll divisor = a * b;

            ans = ((right / divisor) * count[count.size() - 1]);
            ans += count[right % divisor];
            ans -= (((left - 1) / divisor) * count[count.size() - 1]);
            ans -= count[(left - 1) % divisor];

            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}