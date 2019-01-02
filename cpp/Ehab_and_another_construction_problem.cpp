// https://codeforces.com/problemset/problem/1088/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin >> x;
    if (x == 1)
        cout << -1 << endl;
    else
        cout << x << " " << x << endl;
    return 0;
}