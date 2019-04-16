// https://codeforces.com/contest/1154/problem/B
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(all(arr));

    auto last_ptr = std::unique(all(arr));
    arr.resize(std::distance(arr.begin(), last_ptr));

    if (arr.size() == 3 && (arr[1] - arr[0] == arr[2] - arr[1]))
        cout << abs(arr[0] - arr[1]) << endl;
    else if (arr.size() == 2)
    {
        if ((arr[1] - arr[0]) % 2 == 0)
            cout << abs(arr[0] - arr[1]) / 2 << endl;
        else
            cout << abs(arr[0] - arr[1]) << endl;
    }
    else if (arr.size() == 1)
        cout << 0 << endl;
    else
        cout << -1 << endl;

    return 0;
}