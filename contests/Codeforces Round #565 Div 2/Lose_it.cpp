// https://codeforces.com/contest/1176/problem/C
/**
 * Explanation:
 * 
 * Let cnt0 be the number of subsequences [4], cnt1 be the number of 
 * subsequences [4,8], cnt2 — the number of subsequences [4,8,15] and 
 * so on, and cnt5 is the number of completed subsequences [4,8,15,16,23,42].
 * Let's iterate over all elements of a in order from left to right. 
 * If the current element is 4 then let's increase cnt0 by one 
 * (we staring the new subsequence). Otherwise it is always better 
 * to continue some existing subsequence (just because why not?). 
 * If the current element is 8 then we can continue some subsequence [4], 
 * if it is 16 then we can continue some subsequence [4,8,15] and the same
 * for remaining numbers. Let pos be the 0-indexed position of the current 
 * element of a in list [4,8,15,16,23,42]. Then the case pos=0 is described 
 * above, and in other case (pos>0) if cnt[pos−1]>0 then let's set 
 * cnt[pos−1]:=cnt[pos−1]−1 and cnt[pos]:=cnt[pos]+1 (we continue some of existing 
 * subsequences). The answer can be calculated as n−6*cnt[5] after all n iterations.
 * 
 */
#include <bits/stdc++.h>
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define oo 1e9
#define _                             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef long long ll;
using namespace std;
int generateValue(int x)
{
    // {4, 8, 15, 16, 23, 42};
    if (x == 4)
        return 0;
    else if (x == 8)
        return 1;
    else if (x == 15)
        return 2;
    else if (x == 16)
        return 3;
    else if (x == 23)
        return 4;
    else if (x == 42)
        return 5;
    else
        return -oo;
}
void solve()
{
    ll n, answer = 0LL, i;
    cin >> n;
    vector<int> arr(n, INT_MIN);
    vector<int> counter(6, 0);

    For(i, n)
    {
        cin >> arr[i];
        arr[i] = generateValue(arr[i]);
    }
    For(i, n)
    {
        if (arr[i] == 0)
        {
            counter[0]++;
        }
        else
        {
            if (counter[arr[i] - 1] > 0)
            {
                counter[arr[i] - 1]--;
                counter[arr[i]]++;
            }
        }
    }
    answer = n - (6 * counter[5]);
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