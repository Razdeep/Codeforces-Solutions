// https://codeforces.com/contest/1294/problem/A
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
		vector<int> arr(3);
		for (int i = 0; i < 3; ++i)
			cin >> arr[i];
		
		int n;
		cin >> n;

		sort(arr.begin(), arr.end());

		int required = ((arr[2] - arr[1]) + (arr[2] - arr[0]));

		if (n >= required)
		{
			n -= required;
			cout << (n % 3 ? "No" : "Yes") << endl;
		}
		else
			cout << "No" << endl;
		
	}
	return 0;
}