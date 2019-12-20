// https://codeforces.com/contest/1324/problem/A

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

		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		bool ok = true;

		for (int i = 1; i < n; ++i)
			ok &= (arr[i] % 2 == arr[i - 1] % 2);

		cout << (ok ? "YES" : "NO") << endl;
	}
}
