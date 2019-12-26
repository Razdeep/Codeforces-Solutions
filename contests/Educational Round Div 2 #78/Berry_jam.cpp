// https://codeforces.com/contest/1278/problem/C
/**
 * Rating 1600
 * 
 * Idea:
 * 
 * 
 * 
 */
#include <iostream>
#include <vector>
#include <map>
#include <climits>
#define int long long
using namespace std;

int32_t main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		// Assumptions Red : 1, Blue : 2
		int no_of_jars;
		cin >> no_of_jars;
		vector<int> jars(2 * no_of_jars + 1, 0);

		for (int i = 1; i <= 2 * no_of_jars; ++i)
			cin >> jars[i];

		int suffix_red = 0, suffix_blue = 0;
		map<int, int> suffix_point;
		for (int i = 2 * no_of_jars; i > no_of_jars; --i)
		{
			suffix_red += (jars[i] == 1);
			suffix_blue += (jars[i] == 2);

			suffix_point[suffix_red - suffix_blue] = i;
		}

		int max_chosen = 0;
		int prefix_red = 0, prefix_blue = 0;
		for (int i = 0; i <= no_of_jars; ++i) // start loop from 0
		{
			prefix_red += (jars[i] == 1);
			prefix_blue += (jars[i] == 2);

			if (prefix_red == prefix_blue)
			{
				max_chosen = max(max_chosen, i);
			}
			if (suffix_point[prefix_blue - prefix_red] != 0)
			{
				max_chosen = max(max_chosen, i + (2 * no_of_jars - suffix_point[prefix_blue - prefix_red] + 1));
			}
		}
		int ans = 2 * no_of_jars - max_chosen;
		cout << ans << endl;
	}
	return 0;
}