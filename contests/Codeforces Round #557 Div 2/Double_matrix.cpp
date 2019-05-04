// https://codeforces.com/contest/1162/problem/B
/**
 * Idea :
 * The main idea is to differentiate the matrices into large and small
 * matrices and then check if bth the matrices are increasing or not
 * 
 * Pitfall :
 * I was stuck while implementing the isIncreasing() method.
 * 
 */

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;
bool isIncreasing(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j + 1 < arr[i].size(); j++)
        {
            if (arr[i][j + 1] <= arr[i][j])
                return false;
        }
    }
    for (int i = 0; i + 1 < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i + 1][j] <= arr[i][j])
                return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m, i, j;
    cin >> n >> m;
    vector<vector<int>> a(n), b(n);
    FORN(i, n)
    {
        vector<int> row1(m), row2(m);
        a[i] = row1;
        b[i] = row2;
    }
    FORN(i, n)
    {
        FORN(j, m)
        {
            cin >> a[i][j];
        }
    }
    FORN(i, n)
    {
        FORN(j, m)
        {
            cin >> b[i][j];
        }
    }
    FORN(i, n)
    {
        FORN(j, m)
        {
            if (a[i][j] > b[i][j])
            {
                int temp = a[i][j];
                a[i][j] = b[i][j];
                b[i][j] = temp;
            }
        }
    }
    if (isIncreasing(a) && isIncreasing(b))
        cout << "Possible" << endl;
    else
        cout << "Impossible" << endl;
    return 0;
}