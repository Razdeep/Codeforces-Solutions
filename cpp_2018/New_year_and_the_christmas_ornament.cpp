// https://codeforces.com/contest/1091/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int yellow, blue, red;
    cin >> yellow >> blue >> red;
    if (yellow < blue && blue < red)
    {
        cout << (yellow * 3) + 3 << endl;
    }
    else
    {
        int min_colour = min(yellow, blue-1);
        min_colour=min(min_colour,red-2);
        cout<<(min_colour*3)+3<<endl;
    }
    return 0;
}