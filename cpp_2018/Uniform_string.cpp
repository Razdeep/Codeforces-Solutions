// https://codeforces.com/contest/1092/problem/0
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string ans;
        char current_letter='a';
        for(int i=0;i<n;i++)
        {
            if( i%k==0 || current_letter>'z')
            current_letter='a';
            ans+=current_letter;
            current_letter++;
        }
        cout<<ans<<endl;
    }
    return 0;
}