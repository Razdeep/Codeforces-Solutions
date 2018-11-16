// https://codeforces.com/contest/1076/problem/A
// Minimizing the string
// UNSOLVED

#include<bits/stdc++.h>
#define MAX 200005
using namespace std;
typedef long long ll;
int main()
{
    int n,max_str=INT_MIN,i;
    char str[MAX];
    cin>>n>>str;
    for(i=0;i<n;i++)
    {
        max_str=(str[i]>max_str)?str[i]:max_str;
    }
    bool done=false;
    for(i=0;i<n;i++)
    {
        if(str[i]==max_str && !done)
        {
            done=true;
            continue;
        }
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}