// https://codeforces.com/contest/1285/problem/B

/**
 * Idea:
 * 		if any of the prefix-sum or suffix-sum is found to be non-positive,
 * 		we can simply get rid of the reducing prefix/suffix(negative) to get a value
 * 		that is greater(or equal) than the sum of all elements
 *  
 */

#include <iostream>
#include <vector>
#include <climits>
typedef long long ll;

using namespace std;

bool solve(vector<ll>& arr)
{
	int n = int(arr.size());

	ll sum = 0LL;

	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		
		if (sum <= 0)
			return false;
	}

	sum = 0LL;

	for (int i = n - 1; i >= 0; --i)
	{
		sum += arr[i];

		if (sum <= 0)
			return false;
	}

	return true;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		ll n;
		cin >> n;

		vector<ll> arr(n);

		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		
		cout << (solve(arr) ? "Yes" : "No") << endl;

	}
	return 0;
}