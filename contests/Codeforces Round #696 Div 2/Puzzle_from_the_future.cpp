// https://codeforces.com/contest/1474/problem/A
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

	string ans = "1";
	string c = "";
	c.push_back(text[0] + 1);

	for (int i = 1; i < n; ++i) {
		if (c[i - 1] == text[i] + 1) {
			ans += "0";
			c += text[i];
		} else {
			ans += "1";
			c += (text[i] + 1);
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

