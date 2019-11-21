// @TODO
#include <iostream>
using namespace std;
int main()
{
	int sz;
	string text;
	cin >> sz >> text;
	int streak = 1;
	char prev = text[0];
	ll ans = 0LL;
	for (int i = 1; i < int(text.size()); ++i)
	{
		if (prev != text[i])
		{
			ans += comb(streak
		}
	}
	return 0;
}
