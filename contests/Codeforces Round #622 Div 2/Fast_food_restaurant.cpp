// https://codeforces.com/contest/1313/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
#define rall(v) v.rbegin(), v.rend()
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		vector<int> arr(3);

		for (int i = 0; i < 3; ++i)
			cin >> arr[i];

		sort(rall(arr));

		int ans = 0;

		if (arr[0] > 0)
		{
			arr[0]--;
			ans++;
		}
		if (arr[1] > 0)
		{
			arr[1]--;
			ans++;
		}
		if (arr[2] > 0)
		{
			arr[2]--;
			ans++;
		}
		if (arr[0] > 0 && arr[1] > 0)
		{
			arr[0]--;
			arr[1]--;
			ans++;
		}
		if (arr[0] > 0 && arr[2] > 0)
		{
			arr[0]--;
			arr[2]--;
			ans++;
		}
		if (arr[1] > 0 && arr[2] > 0)
		{
			arr[1]--;
			arr[2]--;
			ans++;
		}
		if (arr[0] > 0 && arr[1] > 0 && arr[2] > 0)
		{
			ans++;
		}

		cout << ans << endl;
	}
	return 0;
}
