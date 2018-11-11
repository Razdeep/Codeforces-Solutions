// https://codeforces.com/problemset/problem/122/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isLucky(int n)
{
    if(n==0)
    return false;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
    return true;
    while(n){
        if(n%10!=4 && n%10!=7)
        return false;
        n/=10;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s\n",isLucky(n)?"YES":"NO");
    return 0;
}