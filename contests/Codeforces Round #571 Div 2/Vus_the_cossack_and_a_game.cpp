// https://codeforces.com/contest/1186/problem/B

// NOT SOLVED DUE TO THE FAULT OF QUESTION SETTER

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
    ll row, col;
    cin >> row >> col;
    if (row == 1)
    {
        cerr << "1a" << endl;
        cout << row / 3 << endl;
    }
    else if (row == 2)
    {
        cerr << "2a" << endl;
        cout << col << endl;
    }
    else if (row == 3)
    {
        // Wrong
        cerr << "3a" << endl;
        cout << (col) + (col / 3) << endl;
    }
    else if (row >= 4)
    {
        cerr << "4a" << endl;
        cout << (col / 3) * (col / 3) << endl;
    }
    else
    {

        cerr << "invalid" << endl;
        // cout << (m / 2) * (n / 3) << endl;
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