// https://codeforces.com/contest/1303/problem/A
#include <iostream>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		string text;
		cin >> text;

		int last_one_idx = -1, first_one_idx = -1;

		for (int i = int(text.size()) - 1; i >= 0; --i)
		{
			if (text[i] == '1')
			{
				last_one_idx = i;
				break;
			}
		}

		for (int i = 0; i < int(text.size()); ++i)
		{
			if (text[i] == '1')
			{
				first_one_idx = i;
				break;
			}
		}

		int cnt_zeros = 0;

		for (int i = first_one_idx; i <= last_one_idx; ++i)
			cnt_zeros += (text[i] == '0');

		cout << cnt_zeros << endl;
	}
	return 0;
}