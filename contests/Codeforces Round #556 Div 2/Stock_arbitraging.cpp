// https://codeforces.com/contest/1150/problem/0
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, r;
    cin >> n >> m >> r;
    int min_buy = INT_MAX, max_sell = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int this_buy;
        cin >> this_buy;
        min_buy = (this_buy < min_buy ? this_buy : min_buy);
    }

    for (int i = 0; i < m; i++)
    {
        int this_sell;
        cin >> this_sell;
        max_sell = (this_sell > max_sell ? this_sell : max_sell);
    }
    int remaining_bourles = r % min_buy;
    int bought_stocks = r / min_buy;
    cout << max(r, remaining_bourles + (bought_stocks * max_sell)) << endl;
    return 0;
}