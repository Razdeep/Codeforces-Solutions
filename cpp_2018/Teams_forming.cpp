// https://codeforces.com/contest/1092/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    vector<int> skill(n);
    for(int i=0;i<n;i++)
    {
        cin>>skill[i];
    }
    sort(skill.begin(),skill.end());
    int total_diff=0;
    for(int i=0;i<n;i+=2)
    {
        int this_diff=abs(skill[i+1]-skill[i]);
        total_diff+=this_diff;
    }
    cout<<total_diff<<endl;
    return 0;
}