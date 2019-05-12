// https://codeforces.com/contest/1159/problem/A
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
    ll n;
    cin >> n;
    ll answer = 0LL;
    while(n--)
    {
        char this_stone;
        cin >> this_stone;
        if (this_stone == '-')
        {
            answer -= (answer != 0);
        }
        else{
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}