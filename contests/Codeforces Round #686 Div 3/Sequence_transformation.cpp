// https://codeforces.com/contest/1454/problem/C
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	arr.resize(std::unique(all(arr)) - arr.begin());
	vector<int> freq(n + 1, 0);
	set<int> myset;
	
	if (int(arr.size()) == 1) {
		cout << 0 << endl;
		return;
	}

	for (int i = 0; i < int(arr.size()); ++i) {
		freq[arr[i]]++;
		myset.insert(arr[i]);
	}

	int ans = INT_MAX;

	for (auto it: myset) {
		int this_ans = freq[it] + 1;
		this_ans -= (arr[0] == it);
		this_ans -= (arr.back() == it);
		ans = min(ans, this_ans);
	}

	cout << ans << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc = 1;
	cin >> tc;

	while (tc--) {
		solve();
	}
	return 0;
}

