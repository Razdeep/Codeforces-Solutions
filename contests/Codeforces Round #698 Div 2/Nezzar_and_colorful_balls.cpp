// https://codeforces.com/contest/1478/problem/A
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

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int current_streak = 1;
	int max_streak = 1;

	for (int i = 1; i < n; ++i) {
		if (arr[i] == arr[i - 1]) {
			current_streak++;
		} else {
			current_streak = 1;
		}
		max_streak = max(max_streak, current_streak);
	}

	cout << max_streak << endl;
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

