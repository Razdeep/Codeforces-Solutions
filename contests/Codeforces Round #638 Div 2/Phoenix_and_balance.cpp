// https://codeforces.com/contest/1348/problem/0
#include <iostream>
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int total = 0;
        for (int i = 1; i <= n; ++i) {
            total += (1LL << i);
        }

        int first_part = 0;
        for (int i = 1; i < n / 2; ++i) {
            first_part += (1LL << i);
        }

        first_part += (1LL << n);

        cout << abs(total - (2 * first_part)) << endl;
    }
    return 0;
}