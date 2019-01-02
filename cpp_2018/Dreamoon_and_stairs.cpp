// https://codeforces.com/problemset/problem/476/A
/**
 * Explanation: Min number of moves would be n/2.
 *      This does not guarantees that n/2 is divisible by m
**/ 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int no_of_stairs, m;
    cin>>no_of_stairs>>m;
    int min_moves_possible=(no_of_stairs%2)?no_of_stairs/2+1:no_of_stairs/2;
    int done=false;
    for(int i=min_moves_possible;i<=no_of_stairs;i++)
    {
        if(i%m==0)
        {
            cout<<i<<endl;
            done=true;
            break;
        }
    }
    if(!done)
    cout<<"-1"<<endl;
    return 0;
}