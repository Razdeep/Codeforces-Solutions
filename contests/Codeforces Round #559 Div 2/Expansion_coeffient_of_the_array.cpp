// https://codeforces.com/contest/1159/problem/B
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
    ll n, i;
    cin >> n;
    vector<int> arr(n + 1, -1);
    int min_index, min_arr = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (min_arr < arr[i])
        {
            min_arr = arr[i];
            min_index = i;
        }
    }

    for (i = 1; i <= n; i++)
    {
    }
    return 0;
}