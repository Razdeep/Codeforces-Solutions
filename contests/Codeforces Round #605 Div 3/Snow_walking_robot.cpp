// https://codeforces.com/contest/1272/problem/B

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		string text, ans = "";
		cin >> text;
		int n = (int)text.size();
		int cnt_l, cnt_r, cnt_u, cnt_d;
		cnt_l = cnt_r = cnt_u = cnt_d = 0;
		for (int i = 0; i < n; ++i)
		{
			cnt_l += (text[i] == 'L');
			cnt_r += (text[i] == 'R');
			cnt_u += (text[i] == 'U');
			cnt_d += (text[i] == 'D');
		}
		int moves = 0;
		if (cnt_u == 0 || cnt_d == 0)
		{
			if (cnt_l > 0 && cnt_r > 0)
			{
				cout << 2 << "\nLR\n";
			}
			else
			{
				cout << 0 << endl;
			}
			continue;
		}
		else if (cnt_l == 0 || cnt_r == 0)
		{
			if (cnt_u > 0 && cnt_d > 0)
			{
				cout << 2 << "\nUD\n";
			}
			else
			{
				cout << 0 << endl;
			}
			continue;
		}
		else
		{
			int horizontal_moves = 2 * min(cnt_l, cnt_r);
			int vertical_moves = 2 * min(cnt_u, cnt_d);
			for (int i = 0; i < horizontal_moves / 2; ++i)
				ans += "L";
			for (int i = 0; i < vertical_moves / 2; ++i)
				ans += "U";
			for (int i = 0; i < horizontal_moves / 2; ++i)
				ans += "R";
			for (int i = 0; i < vertical_moves / 2; ++i)
				ans += "D";
			moves = horizontal_moves + vertical_moves;
		}

		cout << moves << endl;
		cout << ans << endl;
	}
	return 0;
}
