// @TODO
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin >> n;
	vector<ll> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	ll sum = std::accumulate(all(arr), 0LL);
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] & 1)
		{
			if (sum > 0)
			{
				cout << (arr[i] / 2 + 1) << endl;
				sum--;
			}
			else
			{
				cout << arr[i] / 2 << endl;
				sum++;
			}
		}
		else
			cout << arr[i] / 2 << endl;
	}
	return 0;
}
