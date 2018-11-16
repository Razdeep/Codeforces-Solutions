// https://codeforces.com/contest/1077/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,k,x;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>a>>b>>k;
        if(k%2==1)
        {
            ll numberOfRight=(k/2)+1;
            ll numberOfLeft=k-numberOfRight;
            x=(a*numberOfRight)-(b*numberOfLeft);
        }
        else{
            ll numberOfRight=(k/2);
            ll numberOfLeft=k-numberOfRight;
            x=(a*numberOfRight)-(b*numberOfLeft);
        }

        cout<<x<<endl;
    }
    return 0;
}