// https://codeforces.com/contest/1263/problem/C
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		int s = int(sqrt(n));
		vector<int> ans;
		for (int i = 0; i <= s; ++i)
			ans.push_back(i);
		for (int i = 1; i <= s; ++i)
			ans.push_back(n / i);

		sort(all(ans));
		auto last_ptr = std::unique(all(ans));
		ans.resize(distance(ans.begin(), last_ptr));
		
		cout << ans.size() << endl;
		for (auto &it: ans)
			cout << it << " ";
		cout << "\n";
	}
	return 0;
}