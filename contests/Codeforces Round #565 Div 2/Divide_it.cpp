// https://codeforces.com/contest/1176/problem/A
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
void solve()
{
    ll n, answer = 0LL;
    cin >> n;
    bool success = true;
    while (n != 1 || n != 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            n = 2 * n / 3;
        }
        else if (n % 5 == 0)
        {
            n = 4 * n / 5;
        }
        else
        {
            success = false;
            break;
        }
        answer++;
    }
    cout << (success || n == 1 ? answer : -1) << endl;
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