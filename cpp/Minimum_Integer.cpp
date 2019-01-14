// https://codeforces.com/contest/1101/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        bool done = false;
        ll l, r, d;
        cin >> l >> r >> d;

        if (d < l || d > r)
            cout << d << endl;
        else
            cout << ((r / d) * d + d) << endl;
    }
    return 0;
}