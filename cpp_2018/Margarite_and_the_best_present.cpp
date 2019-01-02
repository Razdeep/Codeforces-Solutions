// https://codeforces.com/problemset/problem/1080/B
// NOT SOLVED
#include<bits/stdc++.h>
#define MAX 10000007
using namespace std;
typedef long long ll;
int sumOfOdd(int n){
    return n*n;
}
int sumOfEven(int n)
{
    return n*(n+1);
}
void execute(int l,int r)
{
    int sum_odd_L_to_R=sumOfOdd(r)-sumOfOdd(l-1);
    int sum_even_L_to_R=sumOfEven(r)-sumOfOdd(l-1);
    cout<<sum_even_L_to_R-sum_odd_L_to_R<<endl;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        execute(l,r);
    }

    return 0;
}