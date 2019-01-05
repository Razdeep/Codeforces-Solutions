// https://codeforces.com/contest/1099/problem/B
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef long double ld;
int isPerfectSquare(ld n)
{
    ld root = sqrt(n);
    if (root - floor(root) == 0)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ld n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << n + 1 << endl;
        return 0;
    }
    if (isPerfectSquare(n))
    {
        cout << 2 * sqrt(n) << endl;
    }
    else
    {
        // n>pow(floor(sqrt(n)),2)
        if (n <= floor(sqrt(n)) * (floor(sqrt(n)) + 1))
            cout << (2 * floor(sqrt(n)) + 1) << endl;
        else
            cout << 2 * ceil(sqrt(n)) << endl;
    }
    return 0;
}