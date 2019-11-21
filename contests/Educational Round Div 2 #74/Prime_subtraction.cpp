// https://codeforces.com/contest/1238/problem/A
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll x, y;
		cin >> x >> y;
		cout << (((x - y) == 1) ? "NO" : "YES") << endl;
	}
	return 0;
}
