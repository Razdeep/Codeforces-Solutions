// https://codeforces.com/contest/1043/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    vector<ll> voteElodriep;
    ll temp;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        voteElodriep.push_back(temp);
    }
    ll maxElodriep=*max_element(voteElodriep.begin(),voteElodriep.end());
    ll sumElodriep=accumulate(voteElodriep.begin(),voteElodriep.end(),0);
    ll i;
    for(i=maxElodriep;1;i++)
    {
        ll totalVote=n*i;
        ll sumAwruk=totalVote-sumElodriep;
        if(sumAwruk>sumElodriep)
        {
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}