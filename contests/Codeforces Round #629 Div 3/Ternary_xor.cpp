// https://codeforces.com/contest/1328/problem/C
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

		string s;
		cin >> s;

		string a = "1", b = "1";
		bool done = false;

		for (int i = 1; i < n; ++i)
		{
			if (!done)
			{
				if (s[i] == '2')
				{
					a.push_back('1');
					b.push_back('1');
				}
				else if (s[i] == '1')
				{
					a.push_back('1');
					b.push_back('0');
					done = true;
				}
				else
				{
					a.push_back('0');
					b.push_back('0');
				}
			}
			else
			{
				a.push_back('0');
				b.push_back(s[i]);
			}
			
		}
		cout << a << endl << b << endl;
	}
	return 0;
}