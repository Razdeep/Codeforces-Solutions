// https://codeforces.com/contest/1167/problem/B
// INTERACTIVE MODE
// Not solved

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, c, d;
    cout << "? 1 2" << endl;
    cin >> a;
    cout << "? 2 3" << endl;
    cin >> b;
    cout << "? 4 5" << endl;
    cin >> c;
    cout << "? 5 6" << endl;
    cin >> d;
    cout << "| " << a / gcd(a, b) << " " << gcd(a, b) << " " << b / gcd(a, b) << " " << c / gcd(c, d) << " " << gcd(c, d) << " " << d / gcd(c, d) << endl;
    return 0;
}