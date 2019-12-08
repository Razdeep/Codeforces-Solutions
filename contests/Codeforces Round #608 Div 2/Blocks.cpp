// https://codeforces.com/contest/1271/problem/B
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int no_of_blocks;
	cin >> no_of_blocks;
	string text;
	cin >> text;
	string cp_text = text;
	// Turning everything to white
	vector<int> steps;
	for (int i = 0; i + 1 < no_of_blocks; ++i)
	{
		if (text[i] == 'B')
		{
			steps.push_back(i + 1);
			text[i] = 'W';
			text[i + 1] = (text[i + 1] == 'W' ? 'B' : 'W');
		}
	}
	if (text[text.size() - 1] == 'W')
	{
		cout << steps.size() << endl;
		for (int it: steps)
			cout << it << " ";
		cout << endl;
		return 0;
	}

	text = cp_text;
	steps.clear();
	// Turning everything to black
	for (int i = 0; i + 1 < no_of_blocks; ++i)
	{
		if (text[i] == 'W')
		{
			steps.push_back(i + 1);
			text[i] = 'B';
			text[i + 1] = (text[i + 1] == 'W' ? 'B' : 'W');
		}
	}
	if (text[text.size() - 1] == 'B')
	{
		cout << steps.size() << endl;
		for (int it: steps)
			cout << it << " ";
		cout << endl;
	}
	else
		cout << -1 << endl;
	return 0;
}