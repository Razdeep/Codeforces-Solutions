// https://codeforces.com/contest/1282/problem/B1
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n, p, k;
		cin >> n >> p >> k;
		vector<int> arr(n + 1, 0);
		for (int i = 1; i <= n; ++i)
			cin >> arr[i];
			
		sort(arr.begin() + 1, arr.end());
		vector<int> dp(n + 1, 0);

		for (int i = 1; i < k; ++i)
			dp[i] = dp[i - 1] + arr[i];

		for (int i = k; i <= n; ++i)
			dp[i] = dp[i - k] + arr[i];

		int ans = 0;

		for (int i = n; i > 0; --i)
			if (dp[i] <= p)
			{
				ans = i;
				break;
			}

		cout << ans << endl;
	}
	return 0;
}