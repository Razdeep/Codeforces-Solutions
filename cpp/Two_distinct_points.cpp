// https://codeforces.com/contest/1108/problem/A
// NOT SOLVED
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
        ll l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        cout << (l1 < l2 ? l1 : l2) << " " << (r1 > r2 ? r1 : r2) << endl;
    }
    return 0;
}