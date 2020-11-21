#include <iostream>
#include <cmath>
#define int ll
typedef long long ll;
using namespace std;

int smallestFactor(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return i;
        }
    }

    return n;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}
signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        n += smallestFactor(n);
        k--;

        cout << (n + (2 * k)) << endl;

    }

    return 0;
}