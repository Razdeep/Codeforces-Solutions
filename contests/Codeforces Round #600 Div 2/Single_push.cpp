#include <iostream>
#include <set>
#include <vector>
// #define debx(x)     cout << #x << ": " << x << endl;
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];
        vector<int> c(n);
        set<int> myset;
        myset.clear();
        bool possible = true;
        for (int i = 0; i < n; ++i)
            c[i] = b[i] - a[i];
        for (int i = 0; i < n; ++i)
        {
            if (c[i] < 0)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            int i = 0;
            while(c[i] == 0 && i < n)
            {
                ++i;
            }
            for ( ; i < n; ++i)
            {
                if (c[i] == 0)
                    break;
                else if (myset.find(c[i]) == myset.end())
                {
                    myset.insert(c[i]);
                }
            }
            while(i < n)
            {
                if (c[i] != 0)
                {
                    possible = false;
                    break;
                }
                ++i;
            }
        }
        // debx(possible);
        // debx(myset.size());
        cout << (possible && myset.size() <= 1 ? "YES" : "NO") << endl;
    }
    return 0;
}