// Vova and train
// https://codeforces.com/problemset/problem/1066/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int totalJourney,v,l,r;
        scanf("%d%d%d%d",&totalJourney,&v,&l,&r);
        int totalLanterns=totalJourney/v;
        int lanternsUptoR=r/v;
        int lantersUptoL=(l-1)/v;
        int visibleLanterns=totalLanterns-lanternsUptoR+lantersUptoL;
        printf("%d\n",visibleLanterns);
    }
    return 0;
}