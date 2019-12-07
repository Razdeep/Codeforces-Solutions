// https://codeforces.com/contest/1281/problem/B
#include <iostream>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		string me, opponent;
		cin >> me >> opponent;
		// Getting smallest lexigraphical string of mine
		int position;
		char min_char_so_far;
		for (int i = 0; i < int(me.size()); ++i)
		{
			min_char_so_far = me[i];
			position = i;
			for (int j = i + 1; j < int(me.size()); ++j)
			{
				if (me[j] <= min_char_so_far)
				{
					min_char_so_far = me[j];
					position = j;
				}
			}
			if (min_char_so_far < me[i])
			{
				swap(me[position], me[i]);
				break;
			}
		}
		cout << (me < opponent ? me : "---") << endl;
	}
	return 0;
}