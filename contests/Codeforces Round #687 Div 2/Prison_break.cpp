#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int diff(int a, int b, int y, int x) {
	return abs(a - y) + abs(b - x);
}
void solve() {

	int n, m, r, c;
	cin >> n >> m >> r >> c;

	int ans = diff(1, 1, r, c);
	ans = max(ans, diff(1, m, r, c));
	ans = max(ans, diff(n, m, r, c));
	ans = max(ans, diff(n, 1, r, c));

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

