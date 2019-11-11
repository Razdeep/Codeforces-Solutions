// https://codeforces.com/contest/1236/problem/B
#include <iostream>
typedef long long ll;
using namespace std;
const int MOD = int(1e9) + 7;
ll power_mod(ll a, ll b)
{
	if (b == 0)
		return 1;
	if (a == 0)
		return 0;
	ll tmp = power_mod(a, b / 2) % MOD;
	if (b & 1)
		return (((tmp * tmp) % MOD) * a) % MOD;
	return (tmp * tmp) % MOD;
}
int main()
{
	int kinds, boxes;
	cin >> kinds >> boxes;
	cout << power_mod(power_mod(2, boxes) - 1, kinds) << endl;
	return 0;
}
