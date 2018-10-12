// https://codeforces.com/contest/1065/problem/A
// Vasya and chocolate

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll s,a,b,c;
        cin>>s>>a>>b>>c;
        if(a==0||c==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        // cout<<(s*(a+b))/(c*a)<<endl;
        cout<<(s/c)+((s/c)/a*b)<<endl;
    }
    return 0;
}