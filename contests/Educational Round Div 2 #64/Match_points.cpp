// https://codeforces.com/contest/1156/problem/C
// NOT SOLVED
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
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] >= z && !paired[j] && !paired[i])
            {
                paired[i] = paired[j] = true;
                answer++;
                i++;
            }
        }
    }
    cout << answer << endl;
    return 0;
}