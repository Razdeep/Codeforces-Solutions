// https://codeforces.com/contest/1076/problem/B
#include <iostream>
typedef long long ll;

using namespace std;

ll getSmallestDivisor(ll n)
{
	if (n <= 1)
		return 1;
	for (ll i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return i;
	return n;
}
int main()
{
	ll n;
	cin >> n;
	
	ll bias = 0ll;
	if (n & 1)
	{
		n -= getSmallestDivisor(n); // At this point n becomes even
		bias++;
	}

	cout << bias + (n / 2) << endl;
	return 0;
}