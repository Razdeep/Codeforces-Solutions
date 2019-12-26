// https://codeforces.com/contest/1278/problem/B
#include <iostream>
#include <cmath>

using namespace std;

bool possible(int res, int diff)
{
	int sum = 1LL * res * (res + 1) / 2;

	return (sum >= diff) && (sum % 2 == diff % 2);
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int a, b;
		cin >> a >> b;

		int diff = (int)abs(a - b);

		if (a == b)
		{
			cout << 0 << endl;
			continue;
		}

		int res = 0;
		while (!possible(res, diff))
		{
			res++;
		}
		
		cout << res << endl;
	}
	return 0;
}