// https://codeforces.com/contest/1183/problem/C

#include <bits/stdc++.h>
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define _                             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef long long ll;
using namespace std;

const ll INF = 9223372036854775807;

void solve()
{
    ll k, n, a, b;
    cin >> k >> n >> a >> b;
    ll turns = 0, just_play = 0;
    if (k > a)
    {
        turns += k / a;
        k %= a;
        if (k == 0)
        {
            turns -= 1;
            k += a;
        }
        just_play = turns;
    }
    if (k > b)
    {
        turns += k / b;
        k %= b;
        if (k == 0)
        {
            turns -= 1;
            k += b;
        }
    }
    if (turns >= n)
        cout << just_play << endl;
    else
        cout << -1 << endl;
}
int main()
{
    _;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll testcases = 1;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}