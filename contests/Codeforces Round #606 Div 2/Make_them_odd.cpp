// https://codeforces.com/contest/1277/problem/B
#include <iostream>
#include <set>
#include <algorithm>
#define int long long
#define all(v) v.begin(), v.end()
using namespace std;
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, ans = 0;
        cin >> n;
        set<int> myset;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            myset.insert(x);
        }
        while (!myset.empty())
        {
            int max_ = *myset.rbegin();
            myset.erase(max_);
            if (max_ % 2 == 0)
            {
                ans++;
                myset.insert(max_ / 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}