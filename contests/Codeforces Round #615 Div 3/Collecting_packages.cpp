// https://codeforces.com/contest/1294/problem/B
#include <iostream>
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
		vector<pair<int, int>> arr(n);
		
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i].first >> arr[i].second;
		}
		
		sort(arr.begin(), arr.end());

		bool ok = true;

		for (int i = 1; i < n; ++i)
		{
			if (arr[i - 1].second > arr[i].second)
			{
				ok = false;
				break;
			}
		}
		if (!ok)
		{
			cout << "NO" << endl;
			continue;
		}
		int x = 0, y = 0;

		cout << "YES" << endl;

		for (int i = 0; i < n; ++i)
		{
			while(x < arr[i].first)
			{
				cout << "R";
				++x;
			}
			while(y < arr[i].second)
			{
				cout << "U";
				y++;
			}
		}
		cout << endl;
	}
}