// https://codeforces.com/contest/1311/problem/C
#include <iostream>
#include <vector>

using namespace std;

constexpr int NO_OF_ALPHABETS = 26;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int length_of_text, no_of_mistakes;
		cin >> length_of_text >> no_of_mistakes;

		string text;
		cin >> text;

		vector<int> presses(length_of_text, 0);

		for (int i = 0; i < no_of_mistakes; ++i)
		{
			int this_mistake;
			cin >> this_mistake;
			presses[this_mistake - 1]++;
		}

		// Calculating the prefix sum
		for (int i = length_of_text - 2; i >= 0; --i)
			presses[i] += presses[i + 1];

		vector<int> ans(NO_OF_ALPHABETS, 0);

		for (int i = 0; i < length_of_text; ++i)
		{
			ans[text[i] - 'a'] += presses[i];
			ans[text[i] - 'a']++; // This is for the last correct combination
		}

		for (int &it: ans)
			cout << it << " ";

		cout << endl;
	}
	return 0;
}
