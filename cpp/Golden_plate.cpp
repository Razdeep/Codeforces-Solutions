// http://codeforces.com/contest/1072/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll row,column,k;
    cin>>row>>column>>k;
    ll sumOfGild=0;
    while(k--)
    {
        sumOfGild+=(2*(row+column-2));
        row-=4;
        column-=4;
    }
    cout<<sumOfGild<<endl;
    return 0;
}