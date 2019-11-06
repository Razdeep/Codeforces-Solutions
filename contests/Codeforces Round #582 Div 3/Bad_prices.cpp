// https://codeforces.com/contest/1213/problem/B
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		int min_from_right = INT_MAX;
		int no_of_bad_days = 0;
		for (int i = arr.size() - 1; i >= 0; --i)
		{
			if (arr[i] <= min_from_right)
				min_from_right = arr[i];		
			else
				no_of_bad_days++;
		}
		cout << no_of_bad_days << endl;
	}
	return 0;
}
