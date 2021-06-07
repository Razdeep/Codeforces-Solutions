// https://codeforces.com/contest/1526/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	n *= 2;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	sort(all(arr));

	for (int i = 0; 2 * i < n; ++i) {
		if (i & 1) {
			swap(arr[i], arr[n - i - 1]);
		}
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

