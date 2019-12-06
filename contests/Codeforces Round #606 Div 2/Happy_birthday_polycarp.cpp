// https://codeforces.com/contest/1277/problem/A
#include <iostream>
#define int long long
using namespace std;
int noOfDigits(int n)
{
	int res = 0;
	while (n)
	{
		res++;
		n /= 10;
	}
	return res;
}
signed main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		int ans = 0;
		int multiplier = 0;
		int no_of_digits = noOfDigits(n);
		for (int i = 1; i <= no_of_digits; ++i)
		{
			multiplier = (10 * multiplier) + 1; // Getting 1, 11, 111, etc
			for (int j = 1; j <= 9; ++j)
				if (j * multiplier <= n)
					ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
