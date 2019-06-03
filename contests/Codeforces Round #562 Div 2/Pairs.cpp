// https://codeforces.com/contest/1169/problem/B
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
    int n, m;
    cin >> n >> m;
    int first_x, first_y;
    cin >> first_x >> first_y;
    m--;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (first_x != x && first_x != y && first_y != x && first_y != y)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}