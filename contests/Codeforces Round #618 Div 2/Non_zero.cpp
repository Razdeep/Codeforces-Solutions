// https://codeforces.com/contest/1300/problem/A
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n;
		cin >> n;

		vector<int> arr(n);
		
		int cnt_zeros = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (arr[i] == 0)
			{
				arr[i]++;
				cnt_zeros++;
			}
		}
		
		int ans = cnt_zeros;
		int sum = 0;

		for (int i = 0; i < n; ++i)
			sum += arr[i];
		
		cout << (sum ? ans : ans + 1) << endl;
	}
	return 0;
}