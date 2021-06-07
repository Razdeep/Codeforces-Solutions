// https://codeforces.com/contest/1509/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	string text;
	cin >> text;

	vector<bool> isUsed(n, false);
	
	bool possible = true;
	int first_T = 0;
	int last_T = n - 1;

	for (int i = 0; i < n; ++i) {
		if (!isUsed[i]) {
			if (text[i] == 'M') {
				while (first_T < i && text[first_T] == 'M') {
					first_T++;
				}

				if (first_T < i) {
					isUsed[first_T] = true;
				} else {
					possible = false;
				}
				first_T++;

				while (last_T >= i && text[last_T] == 'M') {
					last_T--;
				}

				if (possible && last_T > i) {
					isUsed[last_T] = true;
				} else {
					possible = false;
				}
				last_T--;

				if (possible) {
					isUsed[i] = true;
				}
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		if (isUsed[i] == false) {
			possible = false;
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

