// https://codeforces.com/contest/1095/problem/0
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    string new_str;
    int cur_index=0;
    for(int i=2;cur_index<s.size();i++)
    {
        new_str.push_back(s[cur_index]);
        cur_index+=i;
    }
    cout<<new_str<<endl;
    return 0;
}