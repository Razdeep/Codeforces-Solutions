// https://codeforces.com/contest/1285/problem/C

#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

ll lcm(ll a, ll b)
{
	return a * b / __gcd(a, b);
}
int main()
{
	ll x;
	cin >> x;

	ll ans = 1;

	for (ll i = 1; i * i <= x; ++i)
	{
		if ((x % i == 0) && (lcm(i, x / i) == x))
			ans = i;
	}

	cout << ans << " " << (x / ans) << endl;

	return 0;
}