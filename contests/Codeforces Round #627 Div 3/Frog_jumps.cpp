// https://codeforces.com/contest/1324/problem/C
/**
 * Idea: Count the maximum consecutive left jumps streak
 *       Add one to it, and it is the answer
 *
 */
#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		string text;
		cin >> text;
		
		int n = int(text.size());
		int max_left_streak = INT_MIN;

		for (int i = 0; i < n; )
		{
			int this_left_streak = 0;
			while (text[i] == 'L')
			{
				this_left_streak++;
				++i;
			}

			max_left_streak = max(max_left_streak, this_left_streak);
			++i;
		}
		
		cout << (max_left_streak + 1) << endl;
	}
	return 0;
}
