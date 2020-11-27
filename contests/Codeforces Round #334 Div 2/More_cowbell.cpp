// https://codeforces.com/contest/604/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	if (n <= k) {
		cout << (arr.back()) << endl;
	} else {
		int max_till_now = arr.back();
		int to_be_combined = n % k;
		if (!to_be_combined) {
			to_be_combined = k;
		}
		for (int i = 0; i < 2 * to_be_combined; ++i) {
			if (arr[i] + arr[(2 * to_be_combined) - i - 1] > max_till_now) {
				max_till_now = arr[i] + arr[(2 * to_be_combined) - i - 1];
			}
		}
		cout << max_till_now << endl;
	}

}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc = 1;
	// cin >> tc;

	while (tc--) {
		solve();
	}
	return 0;
}