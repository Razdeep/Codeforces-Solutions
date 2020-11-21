// https://codeforces.com/contest/1370/problem/C
#include <iostream>
#include <cmath>
using namespace std;

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
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "FastestFinger" << endl;
        } else if (n == 2) {
            cout << "Ashishgup" << endl;
        } else if ((n & (n - 1)) == 0) {  // 2 ^ n form
            cout << "FastestFinger" << endl;
        } else if (n & 1) {
            cout << "Ashishgup" << endl;
        } else {                                // n is even
            int odd_divisors_count = 0;

            for (int i = 2; i * i <= n; ++i) {
                if (n % i == 0) {
                    while ((i & 1) && (n % i == 0) && isPrime(i)) {
                        odd_divisors_count++;
                        n /= i;
                    }
                    int other = n / i;
                    while ((other & 1) && (n % other == 0) && isPrime(other)) {
                        odd_divisors_count++;
                        n /= other;
                    }
                }
                
            }
            if (odd_divisors_count == 1) {
                if (n == 2) {
                    cout << "FastestFinger" << endl;
                } else {
                    cout << "Ashishgup" << endl;
                }
            } else { // Many odd divisors
                cout << "Ashishgup" << endl;
            }
        }
    }

    return 0;
}