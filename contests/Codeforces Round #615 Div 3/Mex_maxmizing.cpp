// https://codeforces.com/contest/1294/problem/D
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int queries, raise;
	cin >> queries >> raise;

	map<int, int> mp;

	int ans = 0;

	while (queries--)
	{
		int tmp;
		cin >> tmp;

		mp[tmp % raise]++;

		while (mp[ans % raise] > 0)
		{
			mp[ans % raise]--;
			ans++;
		}
		
		cout << ans << endl;
	}
	return 0;
}