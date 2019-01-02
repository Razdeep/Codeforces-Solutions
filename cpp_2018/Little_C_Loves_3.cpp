// Problem 1047A
// https://codeforces.com/problemset/problem/1047/A
// Little C Loves 3
#include<bits/stdc++.h>
using namespace std;
void solve(int sum)
{
    int copysum=sum;
    bool found=false;
    int a,b,c;
    for(a=1;a<=sum/3;a++)
    {
        int remains=sum-a;
        for(b=1;b<=remains/2;b++)
        {
            if(b%3!=0 && (remains-b)%3!=0)
            {
                c=remains-b;
                found=true;
                break;
            }
        }
        if(found)
        break;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    int sum;
    cin>>sum;
    solve(sum);
    return 0;
}