// https://codeforces.com/contest/1169/problem/0
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
    int n, source_a, dest_a, source_b, dest_b;
    cin >> n >> source_a >> dest_a >> source_b >> dest_b;
    int cur_a = source_a;
    int cur_b = source_b;
    while (cur_a != dest_a && cur_b != dest_b)
    {
        cur_a++;
        cur_b--;
        if (cur_a == n + 1)
        {
            cur_a = 1;
        }
        if (cur_b == 0)
        {
            cur_b = n;
        }
        if (cur_a == cur_b)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}