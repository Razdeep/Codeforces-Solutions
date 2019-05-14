// https://codeforces.com/contest/1165/problem/A
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
    ll n, x, y;
    cin >> n >> x >> y;
    string num;
    cin >> num;
    reverse(all(num));
    ll answer = 0;
    for (int i = 0; i < x; i++)
    {
        if (num[i] == '0' && i == y)
            answer++;
        else if (num[i] == '1' && i != y)
            answer++;
    }
    cout << answer << endl;
    return 0;
}