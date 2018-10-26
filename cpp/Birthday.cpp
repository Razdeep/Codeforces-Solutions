// https://codeforces.com/contest/1068/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll myCeil(ll n,ll d)
{
    ll q = n/d;
    ll r = n%d;
    return q + (r > 0 ? 1:0);
}
int main()
{
    ll maxCoins,numberOfFriends,hasCoins,requiredCoins;
    cin>>maxCoins>>numberOfFriends>>hasCoins>>requiredCoins;
    ll target=(requiredCoins+hasCoins);
    ll numberOfRounds=myCeil(target,numberOfFriends);
    ll givenCoins=numberOfRounds*numberOfFriends;
    if(givenCoins>maxCoins)
    {
        cout<<"-1"<<endl;
    }
    else{
        
        cout<<numberOfRounds<<endl;
    }
    return 0;
}