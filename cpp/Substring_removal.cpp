// https://codeforces.com/contest/1096/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    const ll MOD = 998244353;
    ll n, len_of_suffix = 0, len_of_prefix = 0;
    string s;
    cin >> n;
    cin.ignore();
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[0])
        {
            break;
        }
        len_of_prefix++;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != s[s.size() - 1])
        {
            break;
        }
        len_of_suffix++;
    }
    if (s[0] == s[s.size() - 1]) // If suffix and prefix are equal
    {
        ll ans = (len_of_prefix + len_of_suffix) + (len_of_prefix * len_of_suffix + 1);
        ans %= MOD;
        cout << ans << endl;
    }
    else
    {
        ll ans = len_of_prefix + len_of_suffix + 1;
        ans %= MOD;
        cout << ans << endl;
    }
    return 0;
}