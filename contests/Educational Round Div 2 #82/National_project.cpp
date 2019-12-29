// https://codeforces.com/contest/1303/problem/B

#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	ll tc;
	cin >> tc;

	while (tc--)
	{
		ll length_of_road, good_days, bad_days;
		cin >> length_of_road >> good_days >> bad_days;

		if (length_of_road <= good_days)
		{
			cout << length_of_road << endl;
			continue;
		}

		ll road_length_criteria = (length_of_road / 2) + (length_of_road & 1);

		ll cycles_required = road_length_criteria / good_days;

		ll cycle_size = good_days + bad_days;

		ll ans = cycles_required * cycle_size;

		if (road_length_criteria % good_days)
		{
			ans += (road_length_criteria % good_days);
		}
		else
		{
			ans -= bad_days;
		}
		
		cout << max(ans, length_of_road) << endl;
	}

	return 0;
}