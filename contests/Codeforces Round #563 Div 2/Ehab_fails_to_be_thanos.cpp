// https://codeforces.com/contest/1174/problem/A
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
    vector<int> arr(2 * n, 0);
    for (int i = 0; i < 2 * n; i++)
        cin >> arr[i];
    sort(all(arr));
    if (accumulate(arr.begin(), arr.begin() + n, 0LL) != accumulate(arr.begin() + n, arr.begin() + (2 * n), 0LL))
    {
        for (int i = 0; i < 2 * n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}