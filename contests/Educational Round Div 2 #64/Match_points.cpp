// https://codeforces.com/contest/1156/problem/C
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
    int n, z, answer = 0;
    cin >> n >> z;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(all(arr));
    vector<int> paired(n, false);
    int fast_ptr = 1, slow_ptr = 0;
    while (fast_ptr < n && slow_ptr < n)
    {
        while (paired[slow_ptr])
            slow_ptr++;
        if (slow_ptr >= fast_ptr)
            fast_ptr = slow_ptr + 1;
        if (arr[fast_ptr] - arr[slow_ptr] >= z)
        {
            paired[slow_ptr] = paired[fast_ptr] = true;
            slow_ptr++;
            answer++;
        }
        fast_ptr++;
    }
    cout << answer << endl;
    return 0;
}