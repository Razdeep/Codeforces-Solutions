// https://codeforces.com/contest/1162/problem/A
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
    int no_of_houses, max_height, zoning_restrictions;
    cin >> no_of_houses >> max_height >> zoning_restrictions;
    vector<int> houses(no_of_houses + 1, max_height);
    while (zoning_restrictions--)
    {
        int start, end, this_max;
        cin >> start >> end >> this_max;
        for (int i = start; i <= end; i++)
            houses[i] = min(this_max, houses[i]);
    }
    int profit = 0;
    for (int i = 1; i <= no_of_houses; i++)
        profit += (houses[i] * houses[i]);
    cout << profit << endl;
    return 0;
}