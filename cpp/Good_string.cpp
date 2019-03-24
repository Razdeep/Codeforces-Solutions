// https://codeforces.com/problemset/problem/1140/B
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        int result;
        int length;
        string text;
        cin >> length >> text;
        for(int i = 0; i < text.size(); i++)
        {
            if(text[i] == '>')
            {
                result = i;
                break;
            }
        }
        for(int i = text.size() - 1; i >= 0; i--)
        {
            if(text[i] == '<')
            {
                result = std::min(result, length - i - 1);
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}