// https://codeforces.com/contest/1167/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;

bool isPhone(const string &phone_num)
{
    int first_digit_ok = false;
    int this_index = INT_MAX;
    for (int i = 0; i < phone_num.size(); i++)
    {
        if (phone_num[i] == '8')
        {
            first_digit_ok = true;
            this_index = i;
            break;
        }
    }
    return (first_digit_ok && (phone_num.size() - this_index) >= 11);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string phone_num;
        cin >> phone_num;
        if (isPhone(phone_num))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}