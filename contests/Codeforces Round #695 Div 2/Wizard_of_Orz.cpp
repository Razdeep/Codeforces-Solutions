// https://codeforces.com/contest/1467/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	int cur = 9;
	
	if (n == 1) {
		cout << 9 << endl;
	} else if (n == 2) {
		cout << 98 << endl;
	} else {
		cout << 98;
		for (int i = 0; i < n - 2; ++i) {
			cout << (cur++ % 10);
		}
		cout << endl;
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

