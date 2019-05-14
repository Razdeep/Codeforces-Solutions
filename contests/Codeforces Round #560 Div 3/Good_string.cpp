// https://codeforces.com/contest/1165/problem/C
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, i;
    cin >> n;
    string text, answer;
    cin >> text;
    char prev = 0;
    FORN(i, n)
    {
        if (prev != text[i])
        {
            answer.push_back(text[i]);
            prev = text[i];
        }
        if (answer.size() % 2 == 0)
            prev = 0;
    }
    if (answer.size() & 1)
    {
        cout << (text.size() - answer.size() + 1) << endl;
        cout << answer.substr(0, answer.size() - 1) << endl;
    }
    else
    {
        cout << (text.size() - answer.size()) << endl;
        cout << answer << endl;
    }
    return 0;
}