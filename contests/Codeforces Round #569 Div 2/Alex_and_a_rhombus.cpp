// https://codeforces.com/contest/1180/problem/A

#include <bits/stdc++.h>
#define debugi(x) cerr << "x-> " << x << endl;
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
    ll n;
    cin >> n;
    ll d = 2, a = 1;
    ll no_of_odds_upto_n = n * (a + (n - 1));
    ll term_n = a + (n - 1) * d;
    cout << (2 * no_of_odds_upto_n) - term_n << endl;
}
int main()
{
    _;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll testcases = 1;
    // cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}