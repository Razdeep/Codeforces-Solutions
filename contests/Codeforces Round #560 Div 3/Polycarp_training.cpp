// https://codeforces.com/contest/1165/problem/B
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
    vector<int> arr(n + 1, -1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(all(arr));
    int day = 1, index = 1, answer = 0;
    while(index <= n)
    {
        if(arr[index]>=day)
        {
            answer++;
            day++;
        }
        index++;
    }
    cout << answer << endl;
    return 0;
}