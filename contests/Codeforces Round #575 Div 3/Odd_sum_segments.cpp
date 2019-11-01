// https://codeforces.com/contest/1196/problem/B
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> arr(n, 0);
		int count_odds = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			count_odds += (arr[i] & 1);
		}
		if ( (count_odds < k) || ((count_odds & 1) != (k & 1)))
		{
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for (int i = 0; (i < int(arr.size())) && (k - 1); ++i)
		{
			if (arr[i] & 1)
			{
				cout << i + 1 << " ";
				k--;
			}
		}
		cout << endl;
	}
	return 0;
}
