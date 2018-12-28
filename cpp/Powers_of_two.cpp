// https://codeforces.com/contest/1095/problem/C
// NOT SOLVED
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, k;
    cin >> n >> k;
    // if( k>n || pow(2,k))// Corner case
    if (k > n)
    {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> result(k, 1);
    n -= k; //Because of distributed ones
    int i;
    for (i = 0; n > 0 && i < result.size(); i++)
    {
        int part;
        if (n >= 2)
            part = pow(2, log2(n)) - 1;
        else
            part = 1;
        n -= part;
        result[i] = result[i] + part;
    }
    // cout << "DEBUG " << n;
    // Printing result

    if (n==0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        // cout << "DEBUG " << n;
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}