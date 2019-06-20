// https://codeforces.com/contest/1185/problem/A

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
    ll i, distance;
    vector<int> a(3, 0);
    For(i, 3)
    {
        cin >> a[i];
    }
    cin >> distance;
    sort(all(a));
    ll ans = 0LL;
    if (abs(a[1] - a[0]) < distance)
        ans += (distance - abs(a[1] - a[0]));
    if (abs(a[2] - a[1]) < distance)
        ans += (distance - abs(a[2] - a[1]));
    cout << ans << endl;
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