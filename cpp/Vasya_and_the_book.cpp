// https://codeforces.com/contest/1082/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,d;
        cin>>n>>x>>y>>d;
        int distance=abs(y-x);
        if(distance%d==0)
        {
            cout<<(distance/d)<<endl;
        }
        else if( (y-1)%d==0 || (n-y)%d==0 )
        {
            int x_to_first=abs((x/d) + (x%d?1:0));
            int first_to_y=abs((y-1)/d);
            int x_to_last=abs(((n-x)/d) + ((n-x)%d?1:0));
            int last_to_y=abs((n-y)/d);
            int path_via_first=abs(x_to_first+first_to_y);
            int path_via_last=abs(x_to_last+last_to_y);
            if((y-1)%d==0 && (n-y)%d==0)
            cout<<((path_via_first<path_via_last)?path_via_first:path_via_last)<<endl;
            else if((y-1)%d==0)
            cout<<path_via_first<<endl;
            else
            cout<<path_via_last<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}