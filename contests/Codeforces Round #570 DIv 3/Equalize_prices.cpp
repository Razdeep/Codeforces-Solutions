// https://codeforces.com/contest/1183/problem/B
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
    ll n, k, i;
    cin >> n >> k;
    vector<int> arr(n, 0LL);
    ll min_price = INT_MAX, max_price = INT_MIN;
    For(i, n)
    {
        cin >> arr[i];
        min_price = (arr[i] < min_price ? arr[i] : min_price);
        max_price = (arr[i] > max_price ? arr[i] : max_price);
    }
    if (max_price - min_price <= k)
    {
        cout << min_price + k << endl;
    }
    else if (max_price - k <= min_price + k)
    {
        cout << min_price + k << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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