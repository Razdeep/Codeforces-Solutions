// https://codeforces.com/contest/1516/problem/A

#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n, operations_allowed;
	cin >> n >> operations_allowed;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int carry;

	for (int i = 0; i + 1 < n; ++i) {
		carry = min(operations_allowed, arr[i]);
		arr[i] -= carry;
		arr[i + 1] += carry;
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	
	cout << endl;

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

