// https://codeforces.com/contest/1243/problem/B1
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        vector<int> diff;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] != t[i])
                diff.push_back(i);
        }
        if (int(diff.size()) == 2)
        {
            int first_idx = diff[0];
            int second_idx = diff[1];
            char tmp = s[first_idx];
            s[first_idx] = t[second_idx];
            t[second_idx] = tmp;
            cout << (s == t ? "Yes" : "No") << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}