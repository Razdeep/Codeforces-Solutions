// https://codeforces.com/contest/1327/problem/A
#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		ll n, k;
		cin >> n >> k;

		cout << (n >= k * k && n % 2 == k % 2 ? "YES" : "NO") << endl;
	}
	return 0;
}
