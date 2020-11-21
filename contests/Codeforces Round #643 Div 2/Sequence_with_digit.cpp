// https://codeforces.com/contest/1355/problem/A
#include <iostream>
#include <climits>
#define int ll
typedef long long ll;
using namespace std;
int maxDigit(int n) {
    int res = INT_MIN;
    while (n) {
        res = max(res, n % 10);
        n /= 10;
    }
    return res;
}
int minDigit(int n) {
    int res = INT_MAX;
    while (n) {
        res = min(res, n % 10);
        n /= 10;
    }
    return res;
}
signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        for (int i = 0; i < k - 1; ++i) {
            int min_digit = minDigit(n);
            int max_digit = maxDigit(n);

            n += (min_digit * max_digit);

            if (!min_digit) {
                break;
            }
        }

        cout << n << endl;
    }
}
