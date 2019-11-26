// https://codeforces.com/contest/1255/problem/A
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int source, destination;
        cin >> source >> destination;
        int value = abs(destination - source);
        int ans = 0;
        ans += value / 5;
        value %= 5;
        ans += value / 2;
        value %= 2;
        ans += value / 1;
        value %= 1;
        cout << ans << endl;
    }
    return 0;
}