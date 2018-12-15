// https://codeforces.com/contest/1093/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin.ignore();
        cin>>s;
        sort(s.begin(),s.end());
        cout<<((s[0]==s[s.size()-1])?"-1":s)<<endl;
    }
    return 0;
}