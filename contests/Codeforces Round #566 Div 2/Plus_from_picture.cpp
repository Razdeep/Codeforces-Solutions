// https://codeforces.com/contest/1182/problem/B
// NOT SOLVED
/**
 * First we detect the a center and mark all the lines connected to it.
 * Then we find if there are any other star lying outside the marked region.
 * 
 */
#include <bits/stdc++.h>
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MAX 500
#define _                             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef long long ll;
using namespace std;
void solve()
{
    ll height, width, i, j;
    cin >> height >> width;
    vector<vector<int>> arr(height, vector<int>(width, false));
    vector<vector<int>> marker(height, vector<int>(width, false));
    For(i, height)
    {
        For(j, width)
        {
            char this_char;
            cin >> this_char;
            arr[i][j] = (this_char == '*');
        }
    }
    bool center_found = false;
    for (int i = 1; i + 1 < height; i++)
    {
        for (int j = 1; j + 1 < width; j++)
        {
            if (arr[i][j] && arr[i - 1][j] && arr[i + 1][j] && arr[i][j - 1] && arr[i][j + 1])
            {
                // Center detected
                marker[i][j] = true;
                int idx = i - 1;
                while (idx >= 0 && arr[idx][j])
                {
                    marker[idx][j] = true;
                    idx--;
                }
                idx = i + 1;
                while (idx < height && arr[idx][j])
                {
                    marker[idx][j] = true;
                    idx++;
                }
                idx = j - 1;
                while (idx >= 0 && arr[i][idx])
                {
                    marker[i][idx] = true;
                    idx--;
                }
                idx = j + 1;
                while (idx < width && arr[i][idx])
                {
                    marker[i][idx] = true;
                    idx++;
                }
                center_found = true;
                break;
            }
        }
        if (center_found)
            break;
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (!marker[i][j] && arr[i][j])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << (center_found ? "YES" : "NO") << endl;
}
int main()
{
    _;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll testcases = 1;
    // cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}