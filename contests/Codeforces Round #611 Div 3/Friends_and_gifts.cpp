// https://codeforces.com/contest/1283/problem/C
// @TODO
// @RATED 1500
#include <iostream>
#include <vector>
#include <algorithm>
#define rall(v) v.rbegin(), v.rend()
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n + 1);
	vector<bool> received(n + 1, false);

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		received[arr[i]] = true;
	}

	vector<int> to_receive;

	for (int i = 1; i <= n; ++i)
	{
		if (!received[i])
			to_receive.push_back(i);
	}

	int idx = 0;
	reverse(rall(to_receive));

	for (int i = 1; i <= n; ++i)
		cout << (arr[i] ? arr[i] : to_receive[idx++]) << " ";

	cout << endl;

	return 0;
}