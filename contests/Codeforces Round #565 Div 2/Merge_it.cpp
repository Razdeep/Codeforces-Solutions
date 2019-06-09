// https://codeforces.com/contest/1176/problem/B
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
    ll n, i, answer = 0LL;
    cin >> n;
    vector<int> arr;
    For(i, n)
    {
        int this_num;
        cin >> this_num;
        if (this_num % 3) // not divisible by 3
            arr.push_back(this_num);
        else
            answer++;
    }
    vector<int> unused(arr.size(), true);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j && unused[i] && unused[j] && (arr[i] + arr[j]) % 3 == 0)
            {
                unused[i] = unused[j] = false;
                answer++;
            }
        }
    }
    ll sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (unused[i])
        {
            sum += arr[i];
            if (sum % 3 == 0)
            {
                answer++;
                sum = 0;
            }
        }
    }
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
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}