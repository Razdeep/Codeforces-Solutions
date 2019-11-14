// https://codeforces.com/contest/1245/problem/A
/**
 * Essentially an integer n is coloured white if it is possible to write n = Xa + Yb, where x and Y are any positive integers. 
 * If gcd(a, b) = 1, then there is always a positive integer L, such that it is possible to reach all integers >= L by a linear combination of a and b. 
 * If (a, b) are coprime, then the number of integers not coloured white is finite. 
 * Otherwise, it is infinite. 
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << (__gcd(a, b) == 1 ? "finite" : "infinite") << endl;
    }
    return 0;
}