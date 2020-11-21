// https://codeforces.com/contest/1355/problem/D
#include <iostream>
using namespace std;
int main() {
    int n, s;
    cin >> n >> s;
    if (s >= (n << 1)) {
        cout << "YES" << endl;
        string ans = "";
        for (int i = 0; i < (n - 1); ++i) {
            ans += "2 ";
        }
        cout << ans;
        cout << (s - 2 * (n - 1)) << endl;
        cout << 1 << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}