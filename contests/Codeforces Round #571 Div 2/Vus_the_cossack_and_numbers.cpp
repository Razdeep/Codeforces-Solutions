// https://codeforces.com/contest/1186/problem/D

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
    ll n, i;
    cin >> n;
    vector<float> arr(n);
    vector<int> ans_arr(n);
    ll balance = 0;
    For(i, n)
    {
        cin >> arr[i];
        // ans_arr[i] = (int)arr[i];
        // # PITFALL : int conversion only floors the value when the float is positive
        ans_arr[i] = (int)floor(arr[i]);
        balance += ans_arr[i];
    }
    for (int i = 0; i < arr.size() && balance; i++)
    {
        if (balance < 0)
        {
            if (ans_arr[i] != ceil(arr[i]))
            {
                ans_arr[i] = ceil(arr[i]);
                balance++;
            }
        }
    }
    For(i, n)
    {
        cout << ans_arr[i] << endl;
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
