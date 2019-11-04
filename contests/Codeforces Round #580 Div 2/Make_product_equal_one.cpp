// https://codeforces.com/contest/1206/problem/B
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
	int n;
	cin >> n;
	ll cost = 0LL;
	int cnt_neg = 0, cnt_zeros = 0;
	for (int i = 0; i < n; ++i)
	{
		int this_elem;
		cin >> this_elem;
		if (this_elem == 0)
		{
			cost++;
			cnt_zeros++;
		}
		else if (this_elem >= 1)
			cost += (this_elem - 1);
		else
		{
			cost += (- this_elem - 1);
			cnt_neg++;
		}
	}
	if ((cnt_neg & 1) && (cnt_zeros == 0))
		cost += 2;
	cout << cost << endl;
	return 0;
}
