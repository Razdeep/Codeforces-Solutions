// https://codeforces.com/contest/1295/problem/A
#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;

		if (n & 1)
		{
			cout << 7;
			n -= 3;
		}

		for (int i = 0; i < n / 2; ++i)
			cout << 1;

		cout << endl;
	}
	return 0;
}