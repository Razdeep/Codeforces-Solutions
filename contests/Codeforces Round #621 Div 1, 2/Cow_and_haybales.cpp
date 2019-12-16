// https://codeforces.com/contest/1307/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n, days;
		cin >> n >> days;

		vector<int> arr(n, 0);

		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		for (int i = 1; (i < n) && (days > 0); ++i)
		{
			if (arr[i] > 0)
			{
				int possible_haystacks_here = min(arr[i], days / i);
				arr[0] += possible_haystacks_here;
				days -= possible_haystacks_here * i;
			}
		}

		cout << arr[0] << endl;
	}
}