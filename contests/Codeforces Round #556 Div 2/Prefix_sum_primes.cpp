// https://codeforces.com/contest/1150/problem/C
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
    int n, i;
    cin >> n;
    vector<int> freq(3, 0);
    FORN(i, n)
    {
        int this_num;
        cin >> this_num;
        freq[this_num]++;
    }
    if (freq[2] && freq[1])
    {
        cout << "2 1 ";
        freq[2]--;
        freq[1]--;
        while (freq[2] > 0)
        {
            cout << "2 ";
            freq[2]--;
        }
        while (freq[1] > 0)
        {
            cout << "1 ";
            freq[1]--;
        }
        cout << endl;
    }
    else if(freq[2]){
        while (freq[2] > 0)
        {
            cout << "2 ";
            freq[2]--;
        }
    }
    else if(freq[1]){
        while (freq[1] > 0)
        {
            cout << "1 ";
            freq[1]--;
        }
    }
    return 0;
}