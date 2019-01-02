// https://codeforces.com/contest/1043/problem/B

// WRONG ANSWER

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll> x;
    // x.push_back(0);
    ll n,prev=0,temp;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        x.push_back(temp-prev);
        prev=temp;
    }
    // cout<<x.size()<<endl;
    // // for(vector<ll>::iterator i=x.begin();i!=x.end();i++)
    // // {
    // //     cout<<*i<<" ";
    // // }
    // for(ll i=0;i<x.size();i++)
    // {
    //     cout<<x[i]<<" ";
    // }
    vector<ll> newVec;
    ll i;
    for(i=0;1;i++)
    {
        newVec.push_back(x[i]);
        if(x[i+1]=2*x[i])
        {
            break;
        }
    }
    cout<<i<<endl;
    for(ll i=0;i<x.size();i++)
    {
        cout<<newVec[i]<<" ";
    }
    return 0;
}