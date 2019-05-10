// https://codeforces.com/contest/1163/problem/A
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
    ll n, m;
    cin >> n >> m;
    if (m == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (m == n)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<int> friends(n, true);
    for (int i = 0; (i < n) && m; i++)
    {
        if (i % 2 == 0)
        {
            friends[i] = false;
            m--;
        }
    }
    for (int i = 0; (i < n) && m; i++)
    {
        if (i & 1)
        {
            friends[i] = false;
            m--;
        }
    }
    int answer = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        if (friends[i] == 0 && friends[i + 1])
            answer++;
    }
    cout << answer << endl;
    return 0;
}