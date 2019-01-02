// http://codeforces.com/problemset/problem/621/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,sum=0,minOdd=INT_MAX;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        sum+=temp;
        if(temp%2==1 && temp<minOdd)
        minOdd=temp;
    }
    cout<<((sum%2)?(sum-minOdd):(sum))<<endl;
    return 0;
}