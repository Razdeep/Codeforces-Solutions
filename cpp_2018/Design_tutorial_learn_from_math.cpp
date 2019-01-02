// https://codeforces.com/problemset/problem/472/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
int main()
{
    ll n;
    ll i=1;
    cin>>n;
    while(i++)
    {
        if(!isPrime(i) && !isPrime(n-i))
        break;
    }
    cout<<i<<" "<<n-i<<endl;
    return 0;
}