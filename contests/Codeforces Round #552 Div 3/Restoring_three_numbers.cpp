// https://codeforces.com/contest/1154/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(all(arr));
    int last = arr[arr.size() - 1];
    for (int i = 0; i <= 2; i++)
        cout << last - arr[i] << " ";
    cout << endl;
    return 0;
}