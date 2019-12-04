// https://codeforces.com/contest/1265/problem/B
/**
 * Elegant Problem!
 * Imagine an empty array first and put each element in order, 
 * maintain the left and rightmost limit of the element range inserted so far. 
 * If the range length is equal to the value of the current element, 
 * put a "1" to the answer, else "0".
 * 
 */
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		vector<int> arr(n + 1, 0);
		vector<int> position(n + 1, 0);
		for (int i = 1; i <= n; ++i)
		{
			cin >> arr[i];
			position[arr[i]] = i;
		}
		int left_limit = INT_MAX, right_limit = 0;
		string ans = "";
		for (int i = 1; i <= n; ++i)
		{
			left_limit = min(left_limit, position[i]);
			right_limit = max(right_limit, position[i]);
			ans += (right_limit - left_limit + 1 == i ? "1" : "0");
		}
		cout << ans << endl;
	}
	return 0;
}
