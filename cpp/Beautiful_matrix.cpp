// https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int temp,row=0,column=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&temp);
            if(temp)
            {
                row=i;
                column=j;
                break;
            }
        }
    }
    int distanceFromMidX=(column>3)?column-3:3-column;
    int distanceFromMidY=(row>3)?row-3:3-row;
    
    printf("%d\n",distanceFromMidX+distanceFromMidY);
    return 0;
}