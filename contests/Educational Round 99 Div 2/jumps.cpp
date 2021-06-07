// https://codeforces.com/contest/1455/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	int ans = INT_MAX;

	int just_perfect;
	int just_i;
	for (int i = 1; i <= n; ++i) {
		int this_perfect = i * (i + 1) / 2;
		if (this_perfect >= n) {
			just_i = i;
			just_perfect = this_perfect;
			ans = min(ans, i + (this_perfect - n));
			break;
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (just_perfect - i - 1 == n) {
			ans = min(ans, just_i);
		}
	}

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

