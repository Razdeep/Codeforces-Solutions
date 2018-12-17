// https://codeforces.com/contest/1081/problem/A
/**
 * Explanation: Every (n-1) and n are indivisible to each other expect the number n=2
 * 
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    cout<<( (n==2)?2:1 )<<endl;
    return 0;
}