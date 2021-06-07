// https://codeforces.com/contest/1451/problem/D
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

bool isValid(int x, int y, int d) {
	return (x * x) + (y * y) <= (d * d);
}
void solve() {

	int limit, step_size;
	cin >> limit >>  step_size;

	int possible_step_pairs = static_cast<double> (limit) / (static_cast<double> (step_size) * sqrt(2));
	int x = possible_step_pairs * step_size;
	int ans = isValid(x + step_size, x, limit);

	cout << (ans ? "Ashish" : "Utkarsh") << endl;
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

