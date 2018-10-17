// https://codeforces.com/problemset/problem/102/B
// Sum of digits

// Contraint: input may be 10^100000
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sumOfDigit(ll n)
{
    ll sum=0;
    while(n)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
void solve(string N)
{
    // // first check
    if(N.length()==1)
    {cout<<"0"<<endl;return;}
    ll n=0;
    for(int i=0;i<N.length();i++)
    {
        n+=(N[i]-'0');
    }
    ll count=1;
    while(n>=10)
    {
        n=sumOfDigit(n);
        count++;
    }
    cout<<count<<endl;
}
int main()
{
    string n;
    cin>>n;
    
    solve(n);
    return 0;
}