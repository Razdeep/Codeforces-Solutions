// https://codeforces.com/contest/1526/problem/B

#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	bool possible = false;

	if (n % 11 == 0) {
		possible = true;
	}

	for (int i = 1; i <= 20; ++i) {
		int remaining = n - (i * 111);
		if (remaining < 0) {
			break;
		}
		
		if (remaining % 11 == 0) {
			possible = true;
		}
	}

	cout << (possible ? "YES" : "NO") << endl;

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

