// https://codeforces.com/contest/1059/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int n,L,a;
    cin>>n>>L>>a;
    if(n==0)
    {
        cout<<(L/a)<<endl;
        return 0;
    }
    int t[n],l[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>l[i];
    }
    // Block time
    i--;
    count+=((L-(t[i]+l[i]))/a);
    // Dokan Kholar somoy
    if(t[0]>a)
    count+=(t[0]/a);
    for(i=0;i<n-1;i++)
    {
        if((t[i+1]-(t[i]+l[i]))/a)
        count+=((t[i+1]-(t[i]+l[i]))/a);
    }
    cout<<count<<endl;
    return 0;
}