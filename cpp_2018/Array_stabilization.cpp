// https://codeforces.com/contest/1095/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    if (n <= 2)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = min(a[a.size() - 2] - a[0],a[a.size()-1]-a[1]);
    cout << ans << endl;
    return 0;
}