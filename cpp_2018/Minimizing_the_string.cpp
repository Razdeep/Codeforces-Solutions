// https://codeforces.com/contest/1076/problem/A
// Minimizing the string

#include<bits/stdc++.h>
#define MAX 200005
using namespace std;
typedef long long ll;
int main()
{
    int n;
    char str[MAX];
    cin>>n>>str;
    bool done=false;
    for(int i=0;i<n;i++)
    {
        if(!done)
        {
            if( str[i]>str[i+1] || i==n-1 )
            {
                done=true;
                continue;
            }
        }
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}