// https://codeforces.com/contest/1118/problem/B
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll sum = std::accumulate(all(arr), 0);
    
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<sum-arr[i]<<endl;
        if ((sum - arr[i]) % 2 == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}