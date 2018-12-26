// https://codeforces.com/contest/1087/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string decrypt(const string &str)
{
    string new_str;
    int i = 0;
    int j = str.size() - 1;
    for (int k = str.size() - 1; k >= 0; k++)
    {
        if (k % 2 == 0 && i<=j)
        {
            new_str.push_back((char)str[i++]);
        }
        else if(i<=j){
            new_str.push_back((char)str[j--]);
        }
        else
        break;
    }
    reverse(new_str.begin(), new_str.end());
    return new_str;
}

int main()
{
    string str;
    cin >> str;
    if (str.size() <= 2)
    {
        cout << str << endl;
    }
    else
    {
        cout << decrypt(str) << endl;
    }
    return 0;
}