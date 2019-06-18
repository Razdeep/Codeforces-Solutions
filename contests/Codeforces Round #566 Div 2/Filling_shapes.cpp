// https://codeforces.com/contest/1182/problem/0
/**
 * ----------
 *   Lesson
 * ----------
 * The pow function returns a double value, which got rejected in
 * the online judge.
 */
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
ll mypow(ll n)
{
    ll result = 1, i;
    For(i, n)
        result *= 2;
    return result;
}
void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        cout << 0 << endl;
        return;
    }
    ll no_of_sets = n / 2;
    if (no_of_sets == 0)
        cout << 0 << endl;
    else
        cout << mypow(no_of_sets) << endl;
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