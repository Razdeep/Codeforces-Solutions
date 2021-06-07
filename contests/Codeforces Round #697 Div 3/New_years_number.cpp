// http://codeforces.com/contest/1475/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	for (int i = 0; i < 500; ++i) {
		if (n - (2020 * i) >= 0) {
			if ((n - (2020 * i)) % 2021 == 0) {
				cout << "YES\n";
				return;
			}
		}
	}

	cout << "NO\n";

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

