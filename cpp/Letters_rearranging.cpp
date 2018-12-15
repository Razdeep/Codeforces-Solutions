// https://codeforces.com/contest/1093/problem/B
// NOT SOLVED
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin.ignore();
        cin>>s;
        int warned=false;
        int impossible=false;
        int odd_index,even_index;
        for(int i=0;i<s.size();i++)
        {
            int current_char_frequency=count(s.begin(),s.end(),s[i]);
            if( warned==false && current_char_frequency%2==1 )
            {
                odd_index=i;
                warned=true;
            }
            else if( warned && current_char_frequency )
            {
                impossible=true;
                break;
            }
            else if( current_char_frequency%2==0 )
            {
                even_index=i;
            }
        }
        if(impossible)
        {
            cout<<"-1"<<endl;
            continue;
        }
        //Replace oddindex with even
        char temp=s[odd_index];
        s[odd_index]=s[even_index];
        s[even_index]=temp;
        cout<<s<<endl;
    }

    return 0;
}