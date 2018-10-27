// https://codeforces.com/problemset/problem/580/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100005
int main()
{
    //Objective: Finding the longest nondecreasing subsequence
    ll n,a[MAX];
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll currentStreak=1,maxStreak=1;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])
        {
            currentStreak++;
        }
        else{
            currentStreak=1;
        }
        if(currentStreak>maxStreak)
        maxStreak=currentStreak;
    }
    cout<<maxStreak<<endl;
    return 0;
}