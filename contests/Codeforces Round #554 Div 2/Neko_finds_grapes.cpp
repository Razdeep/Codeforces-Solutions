// https://codeforces.com/contest/1152/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll no_of_treasures, no_of_keys;
    cin >> no_of_treasures >> no_of_keys;
    ll odd_treasures = 0, even_treasures = 0, odd_keys = 0, even_keys = 0;
    while (no_of_treasures--)
    {
        ll this_treasure;
        cin >> this_treasure;
        if (this_treasure & 1)
            odd_treasures++;
        else
            even_treasures++;
    }
    while (no_of_keys--)
    {
        ll this_key;
        cin >> this_key;
        if (this_key & 1)
            odd_keys++;
        else
            even_keys++;
    }
    cout << min(even_treasures, odd_keys) + min(odd_treasures, even_keys) << endl;
    return 0;
}