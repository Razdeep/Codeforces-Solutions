// https://codeforces.com/contest/1511/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	vector<int> arr(n);

	int cnt = 0;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		cnt += (arr[i] == 1 || arr[i] == 3);
	}

	cout << cnt << endl;
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

