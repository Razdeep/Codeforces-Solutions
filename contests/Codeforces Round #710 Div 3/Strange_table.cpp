// https://codeforces.com/contest/1506/problem/A

#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int ceilDiv(int a, int b) {
	return (a % b ? a / b + 1 : a / b);
}

void solve() {

	int rows, cols, val;
	cin >> rows >> cols >> val;

	int col = ceilDiv(val, rows);
	int row = (val % rows ? val % rows : rows);

	int ans = (cols * (row - 1)) + col;

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

