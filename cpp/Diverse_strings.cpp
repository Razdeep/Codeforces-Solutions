// https://codeforces.com/contest/1144/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        string text;
        cin >> text;
        sort(all(text));
        bool is_diversed = true;
        for (int i = 0; i + 1 < text.size(); i++)
        {
            if (text[i] + 1 != text[i + 1])
            {
                is_diversed = false;
                break;
            }
        }
        if (is_diversed)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}