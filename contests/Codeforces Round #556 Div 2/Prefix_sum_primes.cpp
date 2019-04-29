// https://codeforces.com/contest/1150/problem/C
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
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
    return 0;
}