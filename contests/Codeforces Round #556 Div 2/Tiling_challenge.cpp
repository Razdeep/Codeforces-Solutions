// https://codeforces.com/contest/1150/problem/B
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
    int n, i, j;
    cin >> n;
    int arr[n][n];
    FORN(i, n)
    {
        FORN(j, n)
        {
            char ch;
            cin >> ch;
            arr[i][j] = (ch == '.');
        }
    }

    bool success = true;
    FORN(i, n - 2)
    {
        FORN(j, n - 2)
        {
            if (arr[i][j + 1] && arr[i + 1][j] && arr[i + 1][j + 1] && arr[i + 1][j + 2] && arr[i + 2][j + 1])
            {
                arr[i][j + 1] = 0;
                arr[i + 1][j] = 0;
                arr[i + 1][j + 1] = 0;
                arr[i + 1][j + 2] = 0;
                arr[i + 2][j + 1] = 0;
            }
        }
    }
    FORN(i, n)
    {
        FORN(j, n)
        {
            if (arr[i][j])
            {
                success = false;
                break;
            }
        }
    }
    if (success)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}