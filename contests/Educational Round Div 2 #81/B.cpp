// https://codeforces.com/contest/1295/problem/B
// @TODO
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
typedef long long ll;

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n, x;
		cin >> n >> x;

		string text;
		cin >> text;
		if (x == 0)
		{
			cout << 0 << endl;
			continue;
		}
		int cnt_0 = 0, cnt_1 = 0;
		for (char it : text)
		{
			cnt_0 += (it == '0');
			cnt_1 += (it == '1');
		}
		if ((cnt_0 > cnt_1) && (x > 0))
			cout << x / (cnt_0 - cnt_1) << endl;
		else if ((cnt_0 < cnt_1) && (x < 0))
			cout << x / (cnt_1 - cnt_0) << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}