// http://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll len;
    cin>>len;
    string s;
    
        cin>>s;
        ll freqA=count(s.begin(),s.end(),'A');
        ll freqD=count(s.begin(),s.end(),'D');
        if(freqA==freqD)
        cout<<"Friendship"<<endl;
        else if(freqA>freqD)
        cout<<"Anton"<<endl;
        else cout<<"Danik"<<endl;
    
    return 0;
}