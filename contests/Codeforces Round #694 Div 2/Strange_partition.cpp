// https://codeforces.com/contest/1471/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int ceilDiv(int a, int b) {
	return (a / b) + (a % b > 0);
}

void solve() {

	int n, x;
	cin >> n >> x;

	vector<int> arr(n);

	int ans_max = 0, ans_min = 0;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		ans_max += ceilDiv(arr[i], x);
	}

	ans_min = ceilDiv(accumulate(all(arr), 0LL), x);

	cout << ans_min << " " << ans_max << endl;
	
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

