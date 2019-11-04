// https://codeforces.com/contest/1206/problem/C
// @TODO
/*
 * Explanation: 
 *
 *
 */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "NO" << endl;
		return 0;
	}
	vector<int> arr(2 * n, 0);
	int cur = 1;
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
		{
			arr[i] = cur;
			arr[i + n] = cur + 1;
		}
		else 
		{
			arr[i] = cur + 1;
			arr[i + n] = cur;
		}
		cur += 2;
	}
	cout << "YES" << endl;
	for (int i = 0; i < 2 * n; ++i)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
