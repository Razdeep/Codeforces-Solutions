// https://codeforces.com/contest/604/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

float calcScore(int x, int m, int w) {
	return max(0.3f * x, ((1 - (m / 250.f)) * x) - (50.f * w));
}
void solve() {

	vector<int> m(5);
	vector<int> w(5);
	vector<int> x = {500ll, 1000ll, 1500ll, 2000ll, 2500ll};

	for (int i = 0; i < 5; ++i) {
		cin >> m[i];
	}
	for (int i = 0; i < 5; ++i) {
		cin >> w[i];
	}

	float final_score = 0.f;

	for (int i = 0; i < 5; ++i) {
		final_score += calcScore(x[i], m[i], w[i]);
	}

	int hs, hu;
	cin >> hs >> hu;

	final_score += (hs * 100.f);
	final_score -= (hu * 50.f);

	int ans = int(final_score);
	cout << ans << endl;

}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc = 1;
	// cin >> tc;

	while (tc--) {
		solve();
	}
	return 0;
}

