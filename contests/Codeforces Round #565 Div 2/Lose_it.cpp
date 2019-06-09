// https://codeforces.com/contest/1176/problem/C
// NOT SOLVED
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
void solve()
{
    ll n, answer = 0LL, i;
    cin >> n;
    vector<int> arr(n, INT_MIN);
    For(i, n)
    {
        cin >> arr[i];
    }
    const int target[] = {4, 8, 15, 16, 23, 42};
    int cur_len = 0;
    int prev_len = INT_MIN;
    int len = arr.size();
    while (prev_len != len)
    {
        prev_len = len;
        vector<int> save_arr(all(arr));
        arr.clear();
        for (int i = 0; i < save_arr.size(); i++)
        {
            if (save_arr[i] == target[cur_len])
            {
                cur_len = (cur_len + 1) % 6;
            }
            else
            {
                arr.push_back(save_arr[i]);
            }
        }
        len = arr.size();
    }
    answer = arr.size();
    cout << answer << endl;
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