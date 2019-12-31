// https://codeforces.com/contest/1326/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n;
		cin >> n;

		if (n == 1)
		{
			cout << -1 << endl;
			continue;
		}
		
		cout << 2;

		for (int i = 0; i + 1 < n; ++i)
		{
			cout << 3;
		}

		cout << endl;
	}
	return 0;
}
