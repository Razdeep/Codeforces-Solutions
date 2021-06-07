// https://codeforces.com/contest/1452/problem/A
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int x, y;
        cin >> x >> y;

        cout << (x == y ? x + y : 2 * max(x, y) - 1) << endl;
    }
}