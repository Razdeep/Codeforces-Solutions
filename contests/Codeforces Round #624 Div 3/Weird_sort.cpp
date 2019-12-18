// https://codeforces.com/contest/1311/problem/B
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n, m;
		cin >> n >> m;

		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		vector<int> swaps(n, false);
		for (int i = 0; i < m; ++i)
		{
			int pos;
			cin >> pos;
			pos--;
			swaps[pos] = true;
		}

		for (int j = 0; j < n; ++j)
		{
			for (int i = 0; i < n; ++i)
			{
				if (swaps[i] && arr[i] > arr[i + 1])
					swap(arr[i], arr[i + 1]);
			}
		}

		bool ok = true;
		for (int i = 0; i + 1 < n; ++i)
			if (arr[i] > arr[i + 1])
			{
				ok = false;
				break;
			}

		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}