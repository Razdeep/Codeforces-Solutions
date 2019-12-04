// https://codeforces.com/contest/1265/problem/A
#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string text;
        cin >> text;
        int n = int(text.size());
        bool ok = true;
        if (text[0] == '?')
        {
            if (text[1] == '?')
                text[0] = 'a';
            else
                text[0] = 'a' + ((text[1] + 1) % 3);
        }
        for (int i = 1; i + 1 < n; ++i)
        {
            if (text[i] == '?')
            {
                if (text[i + 1] == '?')
                    text[i] = (text[i - 1] == 'c' ? 'a' : text[i - 1] + 1);
                else
                {
                    if (text[i - 1] != 'a' && text[i + 1] != 'a')
                        text[i] = 'a';
                    else if (text[i - 1] != 'b' && text[i + 1] != 'b')
                        text[i] = 'b';
                    else
                        text[i] = 'c';
                }
            }
            else if (text[i] == text[i + 1] || text[i] == text[i - 1])
            {
                ok = false;
                break;
            }
        }
        if (text[n - 1] == '?')
        {
            text[n - 1] = 'a' + ((text[n - 2] + 1) % 3);
        }
        cout << (ok ? text : "-1") << endl;
    }
    return 0;
}