// https://codeforces.com/contest/1140/problem/D
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        sum += i * (i + 1);
    }
    cout << sum << endl;
    return 0;
}