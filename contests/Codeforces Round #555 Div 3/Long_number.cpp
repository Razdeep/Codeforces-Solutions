// https://codeforces.com/contest/1157/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
int operate(int n)
{
    n += 1;
    while (n % 10 == 0)
    {
        n /= 10;
    }
    return n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    
    return 0;
}