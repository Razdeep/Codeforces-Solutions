// https://codeforces.com/contest/1296/problem/B

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
typedef long long ll;
 
using namespace std;
 
ll noOfDigits(ll n)
{
	ll res = 0;
	while (n)
	{
		n /= 10;
		res++;
	}
	return res;
}
 
ll power(int x, unsigned int y)
{
	ll res = 1; // Initialize result
 
	while (y > 0)
	{
		if (y & 1)
			res = res * x;
 
		y = y >> 1; // y = y/2
		x = x * x;  // Change x to x^2
	}
	return res;
}
 
ll solve(ll n)
{
	ll res = 0;
	while (n)
	{
		ll nod = noOfDigits(n);
		ll x = power(10, nod - 1);
		
		n -= x;
		n += (x / 10);
 
		res += x;
	}
	return res;
}
 
int32_t main()
{
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		ll n;
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}