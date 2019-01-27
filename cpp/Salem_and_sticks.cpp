// https://codeforces.com/contest/1105/problem/A

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
ll calculateCost(std::vector<ll> &stick_vector, ll try_stick)
{
    ll cost = 0;
    for (auto this_stick : stick_vector)
    {
        if (this_stick < try_stick - 1)
        {
            cost += abs(this_stick - (try_stick - 1));
        }
        else if (this_stick > try_stick + 1)
        {
            cost += abs(this_stick - (try_stick + 1));
        }
    }
    return cost;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll number_of_sticks;
    cin >> number_of_sticks;
    vector<ll> stick_vector(number_of_sticks, 0);
    for (ll i = 0; i < number_of_sticks; i++)
        cin >> stick_vector[i];
    ll cost = INT_MAX, perfect_stick = -1;
    for (ll try_stick = 1; try_stick <= 100; try_stick++)
    {
        ll this_cost = calculateCost(stick_vector, try_stick);
        if (this_cost < cost)
        {
            cost = this_cost;
            perfect_stick = try_stick;
        }
    }
    cout << perfect_stick << " " << cost << endl;
    return 0;
}