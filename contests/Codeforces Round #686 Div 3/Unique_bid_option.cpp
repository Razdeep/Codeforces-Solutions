// https://codeforces.com/contest/1454/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;

		vector<int> arr(n);
		const int max_ = int(2e5 + 6);
		// vector<int> freq(max_, 0);
		int freq[max_] = {0};
		map<int, int> mp;

		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
			mp[arr[i]] = i + 1;
			freq[arr[i]]++;
		}

		bool done = false;
		int ans = int(1e9);
		int ans_index;
		for (int i = 0; i < n; ++i) {
			if (freq[arr[i]] == 1) {
				done = true;
				if (arr[i] < ans) {
					ans = arr[i];
					ans_index = mp[arr[i]];
				}
			}
		}

		if (!done) {
			cout << -1 << endl;
		} else {
			cout << ans_index << endl;
		}
	}
	return 0;
}

