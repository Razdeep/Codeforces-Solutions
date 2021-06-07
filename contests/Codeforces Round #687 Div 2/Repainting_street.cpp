#include <bits/stdc++.h>
#define trace(x) //cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void traceV(vector<int> a) {
	cout << "[";
	for (auto& it: a) {
		cout << it << " ";
	}
	cout << "]\n";
}
void solve() {

	int n, k;
	cin >> n >> k;

	const int TOTAL_COLORS = 100;
	vector<int> arr(n);
	vector<int> freq(TOTAL_COLORS, 0);
	set<int> myset;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		myset.insert(arr[i]);
	}

	int ans = INT_MAX;

	for (int desired_color: myset) {
		int this_ans = 0;
		for (int i = 0; i < int(arr.size()); ) {
			if (arr[i] != desired_color) {
				i += k;
				this_ans++;
				continue;
			}
			++i;
		}	
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

