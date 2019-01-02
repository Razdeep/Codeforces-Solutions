// https://codeforces.com/problemset/problem/1060/B
// Maximum sum of digits

#include<bits/stdc++.h>
using namespace std;
long long sumOfDigits(long long n)
{
    long sum=0;
    while(n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    long long first,second;
    long long n;
    cin>>n;
    if(n%2==0)
    {
        first=(n/2)+1;
        second=(n/2)-1;
        cout<<(sumOfDigits((n/2)+1)+sumOfDigits((n/2)-1))<<endl;
    }
    else
    {
        first=(n/2)+1;
        second=(n/2);
        cout<<(sumOfDigits((n/2)+1)+sumOfDigits((n/2)))<<endl;
    }
    return 0;
}