// https://codeforces.com/contest/1311/problem/A

#include <iostream>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int a, b;
		cin >> a >> b;

		if (a == b)
		{
			cout << 0 << endl;
			continue;
		}
		
		if (a % 2 == b % 2)
		{
			if (a > b)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
		else
		{
			if (a < b)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
		
	}
	return 0;
}