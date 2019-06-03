// https://codeforces.com/contest/1148/problem/B
// NOT SOLVED
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
    ll n, m, t_a, t_b, k;
    cin >> n >> m >> t_a >> t_b >> k;
    if (k >= min(n, m))
    {
        cout << -1 << endl;
        return 0;
    }
    vector<int> arr_a(n, -1), done_a(n, false);
    vector<int> arr_b(m, -1), done_b(m, false);
    for (int i = 0; i < n; i++)
        cin >> arr_a[i];
    for (int i = 0; i < m; i++)
        cin >> arr_b[i];
    for (int i = 0; i < k; i++)
    {
        // if (i & 1)
        // {
            done_b[i] = true;
        // }
        // else
        // {
        // done_a[i] = true;
        // }
    }
    int i = 0;
    while (done_b[i])
    {
        i++;
    }
    cout << arr_b[i] + t_b << endl;
    return 0;
}
