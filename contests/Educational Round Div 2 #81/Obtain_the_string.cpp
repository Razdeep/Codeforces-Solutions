// https://codeforces.com/contest/1295/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	
	while (tc--)
	{
		string s, t;
		cin >> s >> t;
		int ans = 1;
		
		const int NO_OF_ALPHABETS = 26;
		vector<vector<int>> location(NO_OF_ALPHABETS);

		// Magic happens here
		for (int i = 0; i < int(s.size()); ++i)
			location[s[i] - 'a'].push_back(i);

		bool possible = true;
		int last_ptr = -1;
		for (int i = 0; i < int(t.size()); ++i)
		{
			if (location[t[i] - 'a'].empty())
			{
				possible = false;
				break;
			}
			
			auto it = upper_bound(all(location[t[i] - 'a']), last_ptr);
			if (it != location[t[i] - 'a'].end()) // found and not exhausted
			{
				last_ptr = *it;
			}
			else // exhausted
			{
				ans++;
				last_ptr = *location[t[i] - 'a'].begin();
			}
		}
		cout << (possible ? ans : -1) << endl;
	}
	return 0;
}