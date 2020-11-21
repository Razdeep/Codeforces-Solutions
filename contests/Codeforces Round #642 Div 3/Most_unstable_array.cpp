// https://codeforces.com/contest/1353/problem/A
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;

        if (n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << m << endl;
        } else {
            cout << (m << 1) << endl;
        }
    }
    return 0;
}