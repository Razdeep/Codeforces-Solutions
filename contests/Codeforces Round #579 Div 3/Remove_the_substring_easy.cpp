// https://codeforces.com/contest/1203/problem/D1
#include <iostream>
using namespace std;
int main()
{
	string s, t;
	cin >> s >> t;
	int64_t max = 0;
	for (int64_t i = 0; i < int64_t(s.size()); ++i)
	{
		for (int64_t j = i; j < int64_t(s.size()); ++j)
		{
			int64_t cur_match_idx = 0;
			for (int64_t k = 0; k < int64_t(s.size()); ++k)
			{
				if (k >= i && k <= j)
					continue;
				else if (cur_match_idx < t.size() && s[k] == t[cur_match_idx])
					cur_match_idx++;
				//else
				//	break;
			}
			if (cur_match_idx == int64_t(t.size()))
				max = (j - i + 1 > max ? j - i + 1 : max);
		}
	}
	cout << max << endl;
	return 0;
}

