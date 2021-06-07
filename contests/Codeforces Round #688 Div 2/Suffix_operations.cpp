// https://codeforces.com/contest/1453/problem/B
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

	int simple_operations_needed = 0;

	for (int i = 0; i + 1 < n; ++i) {
		simple_operations_needed += abs(arr[i] - arr[i + 1]);
	}
	

	int max_operations_could_be_reduced = max(abs(arr[0] - arr[1]), abs(arr[n - 2] - arr[n - 1]));

	for (int i = 1; i + 1 < n; ++i) {
		int old_operations = abs(arr[i - 1] - arr[i]) + abs(arr[i] - arr[i + 1]);
		int new_operations = abs(arr[i - 1] - arr[i + 1]);
		max_operations_could_be_reduced = max(max_operations_could_be_reduced, old_operations - new_operations);
	}

	int ans = simple_operations_needed - max_operations_could_be_reduced;
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

