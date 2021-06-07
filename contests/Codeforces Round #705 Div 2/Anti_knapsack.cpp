// https://codeforces.com/contest/1493/problem/A

#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n, k;
	cin >> n >> k;

	cout << ((k / 2) + (n - k)) << endl;

	for (int i = (k + 1) / 2; i < k; ++i) {
		cout << i << " ";
	}

	for (int i = k + 1; i <= n; ++i) {
		cout << i << " ";
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

