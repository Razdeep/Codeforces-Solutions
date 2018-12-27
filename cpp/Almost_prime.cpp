// https://codeforces.com/problemset/problem/26/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int isAlmostPrime(int n)
{
    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) && (n % i == 0))
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (isAlmostPrime(i) == true)
            count++;
    }
    cout << count << endl;
    return 0;
}