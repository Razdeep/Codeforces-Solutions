// https://codeforces.com/contest/1257/problem/B
#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        if (x >= y)
        {
            cout << "Yes" << endl;
        }
        else if (x == 1)
        {
            if (y <= 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if (x == 2)
        {
            if (y <= 3)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if (x == 3)
        {
            if (y <= 3)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        
    }
    return 0;
}