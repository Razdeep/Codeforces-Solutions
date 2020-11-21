// https://codeforces.com/contest/1296/problem/A

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
typedef long long ll;
 
using namespace std;
 
int32_t main()
{
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
 
		vector<int> arr(n);
 
		ll sum = 0;
		int cnt_odd = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			sum += arr[i];
			cnt_odd += (arr[i] & 1);
		}
		int cnt_even = n - cnt_odd;
		if (sum & 1)
			cout << "YES" << endl;
		else
		{
			cout << ((cnt_odd > 0 && cnt_even > 0) ? "YES" : "NO") << endl;
		}
		
	}
	return 0;
}