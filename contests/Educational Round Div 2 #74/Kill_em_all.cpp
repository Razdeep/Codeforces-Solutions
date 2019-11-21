// https://codeforces.com/contest/1238/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, r;
		cin >> n >> r;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		sort(all(arr));
		auto last_ptr = std::unique(all(arr));
		arr.resize(std::distance(arr.begin(), last_ptr));
		deque<int> dq(all(arr));
		int ans = 0;
		int damage = 0;
		while(int(dq.size()))
		{
			dq.pop_back();
			while(int(dq.size()) && (dq.front() - damage) <= r)
				dq.pop_front();
			ans++;
			damage += r;
		}
		cout << ans << endl;
	}
}
