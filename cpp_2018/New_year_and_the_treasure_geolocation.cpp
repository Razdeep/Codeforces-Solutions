// https://codeforces.com/contest/1091/problem/B
/** Explanation:
 *  We are accumulating all the x's and y's of the obelisks and the clues.
 *  The actual location of the treasure would be at the average of the accumulation
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll x, y, accumulate_x = 0, accumulate_y = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> x >> y;
        accumulate_x += x;
        accumulate_y += y;
    }
    cout << accumulate_x / n << " " << accumulate_y / n << endl;
    return 0;
}