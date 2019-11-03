#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i) cin >> arr[i];
		deque<int> dq(all(arr));
		while(dq[0] != 1)
		{
			int cp = dq[0];
			dq.pop_front();
			dq.push_back(cp);
		}
		int ok = true;
		for (int i = 0; i < dq.size(); ++i)
		{
			if (dq[i] != i + 1)
			{
				ok = false;
				break;
			}
		}
		if (ok)
		{
			cout << "YES" << endl;
			continue;
		}
		ok = true;
		while (dq[0] != n)
		{
			int cp = dq[0];
			dq.pop_front();
			dq.push_back(cp);
		}
		for (int i = 0; i < dq.size(); ++i)
		{
			if (dq[i] != n - i)
			{
				ok = false;
				break;
			}
		}
		cout << (ok ? "YES" : "NO") <<endl;
	}
	return 0;
}
