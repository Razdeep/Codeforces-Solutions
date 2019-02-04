// https://codeforces.com/contest/1111/problem/0
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string superhero_first, superhero_second;
    cin >> superhero_first >> superhero_second;
    if (superhero_first.size() == superhero_second.size())
    {
        for (int i = 0; i < superhero_first.size(); i++)
        {
            if (isVowel(superhero_first[i]) != isVowel(superhero_second[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}