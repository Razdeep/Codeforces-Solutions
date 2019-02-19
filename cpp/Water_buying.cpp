// https://codeforces.com/contest/1118/problem/0
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll total_litres, bottle_a_cost, bottle_b_cost;
        cin >> total_litres >> bottle_a_cost >> bottle_b_cost;
        if (total_litres % 2 != 0)
        {
            ll cost_1 = total_litres * bottle_a_cost;
            ll cost_2 = total_litres / 2 * bottle_b_cost + bottle_a_cost;
            cout << (cost_1 < cost_2 ? cost_1 : cost_2) << endl;
        }
        else
        {
            ll cost_1 = total_litres * bottle_a_cost;
            ll cost_2 = total_litres / 2 * bottle_b_cost;
            cout << (cost_1 < cost_2 ? cost_1 : cost_2) << endl;
        }
    }
    return 0;
}