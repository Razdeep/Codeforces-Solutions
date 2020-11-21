// https://codeforces.com/contest/1358/problem/0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;

        cout << (n * m % 2 == 0 ? n * m / 2 : n * m / 2 + 1) << endl;
    }
}