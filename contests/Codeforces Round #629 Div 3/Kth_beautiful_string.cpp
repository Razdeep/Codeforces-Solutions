// https://codeforces.com/contest/1328/problem/B
#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n, k;
		cin >> n >> k;
		
		string ans('a', n);

		for (int i = n - 2; i >= 0; --i)
		{
			if (k <= n - i - 1)
			{
				ans[i] = 'b';
				ans[n - k - 1] = 'b';

				cout << ans << endl;
				break;
			}

			k -= (n - k - 1);
		}
	}

	return 0;
}
