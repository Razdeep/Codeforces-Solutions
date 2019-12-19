// https://codeforces.com/contest/1323/problem/C
#include <iostream>
using namespace std;

bool isPossible(const string &text)
{
	int left = 0, right = 0;
	for (int i = 0; i < int(text.size()); ++i)
	{
		left  += (text[i] == '(');
		right += (text[i] == ')');
	}
	return left == right;
}
int main()
{
	int n;
	cin >> n;

	string text;
	cin >> text;

	if (!isPossible(text))
	{
		cout << -1 << endl;
		return 0;
	}

	int balance = 0;
	int incorrect_portion = 0;
	int ans = 0;

	for (int i = 0; i < int(text.size()); ++i)
	{
		if (text[i] == ')')
		{
			balance--;
		}
		else if (text[i] == '(')
		{
			balance++;
			
			if (balance == 0)
				incorrect_portion++;
		}

		if (balance < 0)
		{
			incorrect_portion++;
		}
		if (balance == 0)
		{
			ans += incorrect_portion;
			incorrect_portion = 0;
		}
	}

	cout << ans << endl;

	return 0;
}
