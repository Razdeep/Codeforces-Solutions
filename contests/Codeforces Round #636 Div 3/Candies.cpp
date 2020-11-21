// https://codeforces.com/contest/1343/problem/A
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        ll n;
        cin >> n;

        for (ll k = 2; 1; ++k) {
            if (n % ((1LL << k) - 1) == 0) {
                cout << (n / ((1LL << k) - 1)) << endl;
                break;
            }
        }
    }

    return 0;
}