// https://codeforces.com/contest/1512/problem/A
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

	for (int i = 1; i + 1 < n; ++i) {
		if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
			cout << (i + 1) << endl;
			return;
		}
	}

	if (arr[0] != arr[1]) {
		cout << 1 << endl;
	} else {
		cout << arr.size() << endl;
	}

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

