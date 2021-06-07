#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n, m;
	cin >> n >> m;

	vector<int> arr(n);
	set<int> myset;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		myset.insert(arr[i]);
	}
	int ans = 0;
	for (int i = 0; i < m; ++i) {
		int tmp;
		cin >> tmp;
		if (myset.find(tmp) != myset.end()) {
			ans++;
		}
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

