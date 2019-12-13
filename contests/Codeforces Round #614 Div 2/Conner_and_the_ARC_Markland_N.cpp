// https://codeforces.com/contest/1293/problem/A
#include <iostream>
#include <map>
#include <climits>
#define all(v) v.begin(), v.end()
typedef long long ll;

using namespace std;

void solve()
{
	int no_of_restaurants, office, closed_count;
	cin >> no_of_restaurants >> office >> closed_count;

	map<int, bool> closed_restaurants;
	closed_restaurants[0] = true;

	for (int i = 0; i < closed_count; ++i)
	{
		int this_closed;
		cin >> this_closed;
		closed_restaurants[this_closed] = true;
	}

	int best_up, best_down;
	best_up = best_down = INT_MAX;
	for (int i = office; i <= no_of_restaurants; ++i)
	{
		if (!closed_restaurants[i])
		{
			best_up = i;
			break;
		}
	}

	for (int i = office; i >= 0; --i)
	{
		if (!closed_restaurants[i])
		{
			best_down = i;
			break;
		}
	}

	cout << min(abs(best_up - office), abs(best_down - office)) << endl;
}

int32_t main()
{
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		solve();
	}
	return 0;
}