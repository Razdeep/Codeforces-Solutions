// https://codeforces.com/contest/1294/problem/C
#include <iostream>
using namespace std;
void solve(int n)
{
	if (n < 24)
	{
		cout << "No" << endl;
		return;
	}
	int a = -1, b = -1;

	for (int i = 2; i * i < n; ++i)
	{
		if (n % i == 0)
		{
			a = i;
			n /= i;
			break;
		}
	}

	if (a != -1)
		for (int i = a + 1; i * i < n; ++i)
		{
			if (n % i == 0)
			{
				b = i;
				n /= i;
				break;
			}
		}
	if (a != -1 && b != -1 && b != n)
	{
		cout << "Yes" << endl;
		cout << a << " " << b << " " << n << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}