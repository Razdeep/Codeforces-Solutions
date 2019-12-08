// https://codeforces.com/contest/1271/problem/A
#include <iostream>
using namespace std;
int main()
{
	int ties, scarves, vests, jackets, suit_1_cost, suit_2_cost;
	cin >> ties >> scarves >> vests >> jackets >> suit_1_cost >> suit_2_cost;
	int ans = 0;
	if (suit_1_cost > suit_2_cost)
	{
		int suit_1_count = min(ties, jackets);
		ans += (suit_1_cost * suit_1_count);
		jackets -= suit_1_count;

		int suit_2_count = min(jackets, min(scarves, vests));
		ans += (suit_2_cost * suit_2_count);
	}
	else
	{
		int suit_2_count = min(jackets, min(scarves, vests));
		ans += (suit_2_cost * suit_2_count);
		jackets -= suit_2_count;

		int suit_1_count = min(ties, jackets);
		ans += (suit_1_cost * suit_1_count);
	}
	cout << ans << endl;
	return 0;
}