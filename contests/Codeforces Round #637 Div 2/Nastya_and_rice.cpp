// https://codeforces.com/contest/1341/problem/A
#include <iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        cout << ((n * (a - b) > c + d) || (n * (a + b) < c - d) ? "No" : "Yes") << endl;
    }
    return 0;
}