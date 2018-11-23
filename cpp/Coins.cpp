// https://codeforces.com/contest/1061/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,s;
    cin>>n>>s;
    cout<<((s%n)?(s/n+1):(s/n))<<endl;
    return 0;
}