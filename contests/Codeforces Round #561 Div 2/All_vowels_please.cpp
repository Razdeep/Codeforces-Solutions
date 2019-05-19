// https://codeforces.com/contest/1166/problem/B
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
    char vowels[] = {"aeiou"};
    ll total_characters;
    cin >> total_characters;
    int len, bread;
    len = bread = INT_MIN;
    for (int this_len = 5; this_len * this_len <= total_characters; this_len++)
    {
        if (total_characters % this_len == 0)
        {
            int this_bread = total_characters / this_len;
            if (this_bread >= 5)
            {
                len = this_len;
                bread = total_characters / this_len;
                break;
            }
        }
    }
    if (len == INT_MIN)
    {
        cout << -1 << endl;
        return 0;
    }
    vector<vector<int>> ans(len, vector<int>(bread, 0));
    for (int i = 0; i < bread; i++)
        ans[0][i] = i % 5;
    for (int i = 1; i < len; i++)
    {
        for (int j = 0; j < bread; j++)
        {
            ans[i][j] = (ans[i - 1][j] + 1) % 5;
        }
    }
    for (int i = 0; i < len; i++)
        for (int j = 0; j < bread; j++)
            cout << vowels[ans[i][j]];
    cout << endl;
    return 0;
}