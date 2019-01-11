// https://codeforces.com/contest/1102/problem/C
/** 
 * Explanation: 
 * 
 * If our kicking strength x is greater than the repairing talent y of Slavik,
 * we can break into the house anytime, and all the doors could be broken.
 * 
 * But, if our kicking strength x is lesser than or equal to repairing talent y of Slavik,
 * We have only the chances of breaking the doors which have durability
 * less than our kick strength 'x'. We cannot break the door with greater durability
 * than x because it would be soon repaired by Slavik. Point here to be observed is that,
 * as soon as we break a door, Slavik would repair a door which has durability less
 * than our kicking strength. Slavik knows that he can easily protect the doors having
 * durability more than our strength. Slavik only worries about the doors which can be
 * broken.
 * 
 * Among all the doors that can be broken by us, Slavik can only protect half of them.
 * So the final answer becomes upper bound of the half of the doors that can be broken.
*/
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, x, y;
    cin >> n >> x >> y;
    if (x > y)
    {
        cout << n << endl; // All the doors can be broken
        return 0;
    }
    ll count_weak_doors = 0;
    ll this_door_strength;
    for (int i = 0; i < n; i++)
    {
        cin >> this_door_strength;
        if (this_door_strength <= x)
            count_weak_doors++;
    }
    ll answer = (count_weak_doors % 2) ? (count_weak_doors + 1) / 2 : count_weak_doors / 2;
    cout << answer << endl;
    return 0;
}