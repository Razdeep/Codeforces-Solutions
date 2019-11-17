// https://codeforces.com/contest/1178/problem/0
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
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
    vector<int> arr(n, 0);
    int all_votes = 0;
    For(i, n)
    {
        cin >> arr[i];
        all_votes += arr[i];
    }
    int alice_vote = arr[0], sum_votes = arr[0];
    vector<int> ans;
    ans.push_back(1);
    for (i = 1; i < n; ++i)
    {
        if (alice_vote >= 2 * arr[i])
        {
            ans.push_back(i + 1);
            sum_votes += arr[i];
        }
    }
    if (sum_votes > all_votes / 2)
    {
        cout << ans.size() << endl;
        For(i, ans.size())
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}