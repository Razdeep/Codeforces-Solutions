// @TODO
// https://codeforces.com/contest/1256/problem/0
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int x = a * n / s;
        int y = n - x;
        cout << (y >= b ? "YES" : "NO") << endl;
    }
    return 0;
}