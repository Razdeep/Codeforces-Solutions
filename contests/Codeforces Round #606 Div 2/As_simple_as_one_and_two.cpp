// https://codeforces.com/contest/1277/problem/C
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		vector<int> ans;
		string text;
		cin >> text;
		// Check for twone
		string pattern = "twone";
		int pos = 0;
		while ((pos = text.find(pattern, pos)) != string::npos)
		{
			text[pos + 2] = '?'; // changing all the 'o' to '?'
			ans.push_back(pos + 2);
		}
		// Check for one
		pattern = "one";
		pos = 0;
		while ((pos = text.find(pattern, pos)) != string::npos)
		{
			text[pos + 1] = '?'; // changing all the 'n' to '?'
			ans.push_back(pos + 1);
		}
		// Check for two
		pattern = "two";
		pos = 0;
		while ((pos = text.find(pattern, pos)) != string::npos)
		{
			text[pos + 1] = '?'; // changing all the 'w' to '?'
			ans.push_back(pos + 1);
		}

		cout << ans.size() << endl;
		for (auto i : ans)
			cout << i + 1 << " ";
		cout << endl;
	}
	return 0;
}