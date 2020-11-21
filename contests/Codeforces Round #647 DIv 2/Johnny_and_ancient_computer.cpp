// https://codeforces.com/contest/1362/problem/A
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    int tc;
    cin >> tc;
 
    while (tc--) {
        ll a, b;
        cin >> a >> b;
 
        if (a == b) {
            cout << 0 << endl;
            continue;
        }

        ll ans = 0LL;

        while (a > b) {
            if ((a % 8LL == 0) && (a / 8LL >= b)) {
                a >>= 3LL;
            } else if ((a % 4LL == 0) && (a / 4LL >= b)) {
                a >>= 2LL;
            } else if ((a % 2LL == 0) && (a / 2LL >= b)) {
                a >>= 1LL;
            } else {
                break;
            }
            ans++;
        }

        if (a == b) {
            cout << ans << endl;
            continue;
        }

        while (a < b) {
            if (a * 8LL <= b) {
                a <<= 3LL;
            } else if (a * 4LL <= b) {
                a <<= 2LL;
            } else if (a * 2LL <= b) {
                a <<= 1LL;
            } else {
                break;
            }
            ans++;
        }

        cout << (a == b ? ans : -1) << endl;
    }
    return 0;
}