// https://codeforces.com/contest/1157/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        num[i] = ch - '0';
    }
    vector<int> function(10, -1);
    for (int i = 1; i <= 9; i++)
        cin >> function[i];
    int to_be_swapped, swap;
    for (int i = 0; i < num.size(); i++)
    {
        if (function[num[i]] > num[i])
        {
            to_be_swapped = num[i];
            swap = function[num[i]];
            break;
        }
    }
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == to_be_swapped)
            cout << swap;
        else
            cout << num[i];
    }
    cout << endl;
    return 0;
}