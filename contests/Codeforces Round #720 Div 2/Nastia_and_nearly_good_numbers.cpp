// https://codeforces.com/contest/1521/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int a, b;
	cin >> a >> b;

	int z = a * b;
	int x = a;
	int y = z - a;

	if (x == y) {
		z *= 13;
		y = z - a;
	}

	if (x == 0 || y == 0) {
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
	cout << x << " " << y << " " << z << endl;

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

