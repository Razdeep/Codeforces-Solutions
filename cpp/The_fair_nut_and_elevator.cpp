// https://codeforces.com/problemset/problem/1084/A
/**
 * Explanation: Optimum condition can be achieved by setting the x-th floor as 1st floor.
 * Thus, we consider calculating the cost of moving everyone except the 1st floor.
 */

// NOT SOLVED

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll cost = 0, number_of_floors;
    cin >> number_of_floors;
    vector<ll> house(number_of_floors + 1, 0);
    for (int i = 1; i <= number_of_floors; i++)
    {
        cin >> house[i];
        if (i != 1)
            cost += (2 * house[i] - 1);
    }
    cout << cost << endl;
    return 0;
}