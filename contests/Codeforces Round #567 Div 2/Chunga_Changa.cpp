// https://codeforces.com/contest/1181/problem/A
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
    ll x, y, coco_cost;
    cin >> x >> y >> coco_cost;
    ll max_cocos_bought = (x + y) / coco_cost;
    ll left_x = (x % coco_cost);
    ll left_y = (y % coco_cost);
    ll reqd_x = coco_cost - left_x;
    ll reqd_y = coco_cost - left_y;
    ll min_debt = INF;
    if (reqd_x <= left_y)
        min_debt = min(min_debt, reqd_x);
    if (reqd_y <= left_x)
        min_debt = min(min_debt, reqd_y);
    if (min_debt == INF)
        min_debt = 0;
    cout << max_cocos_bought << " " << min_debt << endl;
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