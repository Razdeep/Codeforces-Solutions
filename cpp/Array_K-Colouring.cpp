// https://codeforces.com/contest/1102/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<int> arr(n + 1, 0);
    vector<int> number_count(n + 1, 0);
    int this_colour;
    for (ll i = 1; i <= n; i++)
    {
        cin >> this_colour;
        arr[i] = ++number_count[this_colour];
    }
    ll used_colours = *max_element(all(arr));
    if (used_colours > k)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}