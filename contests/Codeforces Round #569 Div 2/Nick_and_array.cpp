// https://codeforces.com/contest/1180/problem/B

/**
 * Explanation:
 * The idea is to convert every element to the maximal
 * absolute value first.
 * Then check if the number of negative numbers is even.
 * If yes, then it is the Answer.
 * If No, then perform the operation on the most negative
 * number.
 * 
 */
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

ll operate(ll x)
{
    return -x - 1;
}
void solve()
{
    ll n, i;
    cin >> n;
    vector<int> arr(n);
    int min_value = INT_MAX, min_index;
    For(i, n)
    {
        cin >> arr[i];
        if (arr[i] >= 0)
            arr[i] = operate(arr[i]);
        if (arr[i] < min_value)
        {
            min_value = arr[i];
            min_index = i;
        }
    }
    ll count_negative = 0;
    For(i, n)
    {
        if (arr[i] < 0)
            count_negative++;
    }
    if (count_negative & 1)
    {
        arr[min_index] = operate(arr[min_index]);
    }
    For(i, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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