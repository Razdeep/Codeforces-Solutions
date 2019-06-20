// https://codeforces.com/contest/1185/problem/B

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

bool isPossible(string a, string b)
{
    if (a == b)
        return true;
    if (b.size() < a.size())
        return false;
    ll index_a = 0, index_b = 0;
    char last_char;
    while (index_a < a.size() && index_b < b.size())
    {
        while (index_a < a.size() && index_b < b.size() && a[index_a] == b[index_b])
        {
            index_a++;
            index_b++;
        }
        last_char = b[index_b - 1];
        while (index_b < b.size() && b[index_b] == last_char)
        {
            index_b++;
        }
        if (a[index_a] != b[index_b])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll i, n;
    cin >> n;
    For(i, n)
    {
        string a, b;
        cin >> a >> b;
        cout << (isPossible(a, b) ? "YES" : "NO") << endl;
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
    // cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}