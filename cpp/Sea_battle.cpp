// https://codeforces.com/problemset/problem/1131/A
/**
 * Explanation:
 * The solution is to calculate the max perimeter.
 * Move the perimeter one step away, and attach the 4 corner points.
 * Sum of all is the answer.
 * 
 */
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll width_1, height_1, width_2, height_2;
    cin >> width_1 >> height_1 >> width_2 >> height_2;
    ll answer = 2 * (width_1 + height_1 + height_2) + 4;
    cout << answer << endl;
    return 0;
}