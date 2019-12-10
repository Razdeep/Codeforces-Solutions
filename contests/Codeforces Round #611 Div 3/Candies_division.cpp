// https://codeforces.com/contest/1283/problem/B
#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int candies, children;
		cin >> candies >> children;

		int ans = (candies / children) * children;

		int remaining = candies - ans;

		ans += min(children / 2, remaining);

		cout << ans << endl;
	}
	return 0;
}