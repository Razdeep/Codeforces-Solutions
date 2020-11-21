// https://codeforces.com/contest/1342/problem/A
#include <iostream>
#include <vector>
typedef long long ll;
#define int ll
using namespace std;

signed main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int x, y;
        int a, b;
        
        cin >> x >> y;
        cin >> a >> b;
        
        if (x == 0 && y == 0) {
            cout << 0 << endl;
        } else if (2 * a < b) {
            cout << ((x + y) * a) << endl;
        } else {
            if (x > y) {
                swap(x, y);
            }
            // x < y
            int ans = 0;

            ans = (((y - x) * a) + (x * b));
            cout << ans << endl;
        }
    }

    return 0;
}