// https://codeforces.com/contests/1186/0
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
    ll n, m, k;
    cin >> n >> m >> k;
    cout << (m >= n && k >= n ? "Yes" : "No") << endl;
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