// https://codeforces.com/problemset/problem/1080/B
// NOT SOLVED
#include<bits/stdc++.h>
#define MAX 10000007
using namespace std;
typedef long long ll;
int s[MAX+5];
int calc(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2)
        sum-=i;
        else
        sum+=i;
    }
    return sum;
}
int main()
{
    // Building up the array
    
    s[1]=-1;
    for(int i=2;i<MAX;i++)
    {
        if(i%2)
        s[i]=s[i-1]-i;
        else
        s[i]=s[i-1]+i;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l>1e7 || r>1e7)
        cout<<(calc(r)-calc(l))<<endl;
        else
        cout<<(s[r]-s[l-1])<<endl;
    }

    return 0;
}