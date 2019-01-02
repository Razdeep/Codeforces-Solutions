// https://codeforces.com/problemset/problem/1093/C
/** Explanation:
 *  I am considering each of elements of the first half as 'a'
 *  And corresponding element of 'a' in the other half as 'b' 
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
    vector<ll> result(n, 0);
    for (ll i = 0; i < n / 2; i++)
    {
        ll this_hint, a, b;
        cin >> this_hint;
        if (i == 0)
        {
            a = 0;
            b = this_hint - a;
        }
        else
        {
            b = result[n - i];
            a = result[i - 1];
            while (1)
            {
                if (a + b == this_hint)
                    break;
                else if (a + b > this_hint)
                    b += (this_hint - b - a);
                else
                    a += (this_hint - b - a);
            }
        }

        result[i] = a;
        result[n - i - 1] = b;
    }

    for (ll i = 0; i < n; i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}