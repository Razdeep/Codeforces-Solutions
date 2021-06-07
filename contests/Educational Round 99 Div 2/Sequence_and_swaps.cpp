// https://codeforces.com/contest/1455/problem/D
// NOT SOLVED
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;


void solve() {

	int n, x;
	cin >> n >> x;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	vector<int> sorted_arr(all(arr));
	sort(all(sorted_arr));

	if (arr == sorted_arr) {
		cout << 0 << endl;
		return;
	}

	int operations = 0;
	for (int i = 0; i < n; ++i) {
		// trace(arr[i])
		if (arr[i] > x) {
			// swap(x, arr[i]);
			int tmp = x;
			x = arr[i];
			arr[i] = tmp;
		}
		// trace(x)
		// trace(arr[i])
		// trace(arr[i + 1])

		if (x > arr[i + 1]) {
			vector<int> cp(all(arr));
			sort(all(cp));
			if (cp != arr) {
				cout << -1 << endl;
				return;
			}
		}
		operations++;
	}
	cout << (operations - 1) << endl;

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

