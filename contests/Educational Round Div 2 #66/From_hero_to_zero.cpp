// https://codeforces.com/contest/1175/problem/0
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;

ll solve(ll n, ll k)
{
    ll answer = 0;
    while (n)
    {
        if (n % k == 0)
        {
            n /= k;
            answer++;
        }
        else
        {
            ll diff = n - ((n / k) * k);
            answer += diff;
            n -= diff;
        }
    }
    return answer;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll testcases;
    cin >> testcases;
    while (testcases--)
    {
        ll answer = 0;
        ll n, k;
        cin >> n >> k;
        answer = solve(n, k);
        cout << answer << endl;
    }
    return 0;
}