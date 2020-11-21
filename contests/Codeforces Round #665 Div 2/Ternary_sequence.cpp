// https://codeforces.com/contest/1401/problem/B

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int a0, a1, a2;
        int b0, b1, b2;

        cin >> a0 >> a1 >> a2;
        cin >> b0 >> b1 >> b2;

        int ans = 0;
        
        int m = min(a2, b1);
        ans += (m * 2);
        a2 -= m;
        b1 -= m;

        m = min(a1, b1);
        a1 -= m;
        b1 -= m;

        m = min(a1, b0);
        a1 -= m;
        b0 -= m;

        m = min(b2, a0);
        b2 -= m;
        a0 -= m;

        m = min(b2, a2);
        b2 -= m;
        a2 -= m;

        ans -= (b2 * 2);

        cout << ans << endl;
    }
    return 0;
}