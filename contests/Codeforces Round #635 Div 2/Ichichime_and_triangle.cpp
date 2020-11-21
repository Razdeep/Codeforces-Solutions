// https://codeforces.com/contest/1337/problem/A
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << b << " " << c << " " << min(d, b + c - 1) << endl;
    }
}