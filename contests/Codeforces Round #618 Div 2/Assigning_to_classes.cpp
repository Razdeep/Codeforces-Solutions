// https://codeforces.com/contest/1300/problem/B
// @TODO
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
		int n;
		cin >> n;

		vector<int> arr(2 * n, 0);

		for (int i = 0; i < 2 * n; ++i)
			cin >> arr[i];
		
		sort(all(arr));

		vector<int> new_arr[2];

		for (int i = 0; i < 2 * n; ++i)
			new_arr[i & 1].push_back(arr[i]);
		
		cout << abs(new_arr[0][new_arr[0].size() / 2] - new_arr[1][new_arr[1].size() / 2]) << endl;
	}
	return 0;
}