// https://codeforces.com/contest/1287/problem/A
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
		string text;
		cin >> text;
		string prev;

		int cnt = 0;
		
		for (int j = 0; j < n; ++j)
		{
			prev = text;
			for (int i = 0; i + 1 < n; ++i)
			{
				if (prev[i] == 'A')
					text[i + 1] = 'A';
			}
			cnt += (text != prev);
		}
		cout << cnt << endl;
	}
	return 0;
}