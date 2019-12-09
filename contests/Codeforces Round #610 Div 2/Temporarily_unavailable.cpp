// https://codeforces.com/contest/1282/problem/A
#include <iostream>
typedef long long ll;
using namespace std;

signed main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int starting, ending, centre, range;
		cin >> starting >> ending >> centre >> range;

		if (starting > ending)
			swap(starting, ending);

		int distance       = abs(ending - starting);
		int coverage_start = max(starting, centre - range);
		int coverage_end   = min(ending, centre + range);
		int coverage_len   = max(0, coverage_end - coverage_start);
		int ans            = distance - coverage_len;

		cout << ans << endl;
	}
	return 0;
}