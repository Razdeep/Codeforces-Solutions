// https://codeforces.com/contest/1485
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int calcOperations(int a, int b) {
	if (b == 1) {
		return INT_MAX;
	}
	int cnt = 0;

	while (a > 0) {
		a = a / b;
		cnt++;
	}

	return cnt;
}
void solve() {

	int a, b;
	cin >> a >> b;

	if (a == b) {
		cout << 2 << endl;
		return;
	}

	int ans = INT_MAX;

	for (int i = 0; i * i < a; ++i) {
		int copy_a = a;
		int tmp = i + calcOperations(copy_a, b + i);
		ans = min(ans, tmp);
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

