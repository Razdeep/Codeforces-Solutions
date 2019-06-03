// https://codeforces.com/contest/1148/problem/0
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    ll individual = min(a, b);
    ll answer = (2 * c) + (2 * individual);
    if (a != b)
        answer++;
    cout << answer << endl;
    return 0;
}