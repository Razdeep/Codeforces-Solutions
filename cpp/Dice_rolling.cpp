// https://codeforces.com/contest/1093/problem/0

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int total_point;
        cin>>total_point;
        int answer=-1;
        for(int i=2;i<=7;i++)
        {
            if( total_point%i == 0 )
            {
                answer=total_point/i;
                break;
            }
        }
        if(answer!=-1)
        {
            cout<<answer<<endl;
            continue;
        }
        answer=-1;
        for(int i=2;i<=7;i++)
        {
            if( total_point%i >= 2)
            {
                answer=(total_point/i)+1;
                break;
            }
        }
        if(answer!=-1)
        {
            cout<<answer<<endl;
            continue;
        }

    }
    return 0;
}