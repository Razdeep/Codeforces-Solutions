// https://codeforces.com/contest/1183/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sumOfDigits(ll n)
{
    ll res = 0LL;
    while (n)
    {
        res += (n % 10);
        n /= 10;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    while (sumOfDigits(n) % 4)
    {
        n++;
    }
    cout << n << endl;
}