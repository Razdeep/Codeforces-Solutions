// https://codeforces.com/contest/1174/problem/B
/**
 * -------------
 * Explanation:
 * -------------
 *      It can be found that if there exists atleast one even and one odd number,
 * then it is possible to swap any number regardless of the parity of the number.
 * [Hint: Use the different parity number as an intermediate space to swap]
 * That means if both parity typed numbers are present in the array, then the
 * answer would be actually the sorted array.
 *      On the other hand, if the array has only one type of parity, it is not 
 * possible to swap the numbers, thus original array is the answer
 * 
 */
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
    ll n;
    cin >> n;
    vector<int> arr(n, 0);
    bool has_odd, has_even;
    has_odd = has_even = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] & 1)
            has_odd = true;
        else
            has_even = true;
    }
    if (has_even && has_odd)
        sort(all(arr));
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}