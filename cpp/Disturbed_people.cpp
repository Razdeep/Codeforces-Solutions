// https://codeforces.com/contest/1077/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll> lightsOn;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        lightsOn.push_back(temp);
    }
    ll turnedOfLights=0;
    for(int i=1;i<n-1;i++)
    {
        if(lightsOn[i-1] && !lightsOn[i] && lightsOn[i+1])
        {
            lightsOn[i+1]=0; // Turning off light
            turnedOfLights++;
        }
    }
    cout<<turnedOfLights<<endl;
    return 0;
}