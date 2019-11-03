// https://codeforces.com/contest/1203/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		n *= 4;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; ++i)	cin >> arr[i];
		sort(all(arr));
		int area = arr[0] * arr[arr.size() - 1];
		bool ok = true;
		for (int i = 0; i + 1< n; i += 2)
			if (arr[i] != arr[i + 1])
				ok = false;
		for (int i = 0; i < arr.size(); ++i)
			if (arr[i] * arr[arr.size() - i - 1] != area)
				ok = false;
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}
