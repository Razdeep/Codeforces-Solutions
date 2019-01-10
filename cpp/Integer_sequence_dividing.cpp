// https://codeforces.com/contest/1102/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll sum_upto_n = n * (n + 1) / 2;
    ll first_sum = sum_upto_n / 2;
    ll second_sum = sum_upto_n - first_sum;
    ll answer = second_sum - first_sum;
    cout << answer << endl;
    return 0;
}