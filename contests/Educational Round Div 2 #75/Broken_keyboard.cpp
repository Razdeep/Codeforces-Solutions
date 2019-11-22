// https://codeforces.com/contest/1251/problem/A
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#define all(v) (v).begin(), (v).end()
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string text;
        cin >> text;
        if (int(text.size()) == 1)
        {
            cout << text << endl;
            continue;
        }
        vector<bool> broken(26, true);
        set<char> myset(all(text));
        int i = 0;
        while(i < int(text.size()))
        {
            int streak = 1;
            int j = i + 1;
            while (j < int(text.size()) && text[i] == text[j])
            {
                j++;
                streak++;
            }
            if(streak & 1)
            {
                broken[text[i] - 'a'] = false;
            }
            i = j;
        }
        string res;
        for (auto c: myset)
        {
            if (!broken[c - 'a'])
                res.push_back(c);
        }
        sort(all(res));
        cout << res << endl;
    }
    return 0;
}