// https://codeforces.com/problemset/problem/712/A
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
    std::vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    a[n - 1] = b[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        a[i] = b[i + 1] + b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}