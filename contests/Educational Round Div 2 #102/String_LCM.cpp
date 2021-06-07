// https://codeforces.com/contest/1473/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int gcd(int a, int b) {
	if (b <= 0) {
		return a;
	}

	return gcd(b, a % b);
}
void solve() {

	string a, b;
	cin >> a >> b;

	if (a.size() > b.size()) {
		swap(a, b);
	}

	bool possible = true;
	string tmp = b;

	int repetitions = (a.size() * b.size()) / gcd(a.size(), b.size());

	for (int i = 0; i < repetitions; ++i) {
		if (i == int(b.size())) {
			b += tmp;
		}

		if (a[i % int(a.size())] != b[i]) {
			possible = false;
		}
		
	}

	cout << (!possible ? "-1" : b) << endl;

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

