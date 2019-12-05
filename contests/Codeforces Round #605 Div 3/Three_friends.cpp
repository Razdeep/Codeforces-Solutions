// https://codeforces.com/contest/1272/problem/0

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		vector<int> arr(3, 0);
		for (int i = 0; i < 3; ++i)
		{
			cin >> arr[i];
		}
		sort(all(arr));
		int ans = 0;
		if (arr[0] == arr[1] && arr[1] == arr[2])
		{
			ans = 0;
		}
		else if (arr[2] == arr[1])
		{
			arr[1]--;
			arr[2]--;
			if (arr[1] - arr[0])
				arr[0]++;
			ans = (arr[2] - arr[1]) + (arr[1] - arr[0]) + (arr[2] - arr[0]);
		}
		else if (arr[1] == arr[0])
		{
			arr[0]++;
			arr[1]++;
			if (arr[2] - arr[1])
				arr[2]--;
			ans = (arr[2] - arr[1]) + (arr[1] - arr[0]) + (arr[2] - arr[0]);
		}
		else
		{
			arr[0] += (arr[0] < arr[1]);
			arr[2] -= (arr[1] < arr[2]);
			ans = (arr[2] - arr[1]) + (arr[1] - arr[0]) + (arr[2] - arr[0]);
		}
		cout << ans << endl;
	}
	return 0;
}
