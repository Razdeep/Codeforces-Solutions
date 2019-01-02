// Diverse substring
// https://codeforces.com/problemset/problem/1073/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    if(s.size()==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i+1<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"YES"<<endl;
            cout<<s[i]<<s[i+1]<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}