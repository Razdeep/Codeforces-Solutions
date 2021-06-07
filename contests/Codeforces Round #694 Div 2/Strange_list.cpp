// https://codeforces.com/contest/1471/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n, x;
	cin >> n >> x;

	vector<pair<int, int> > arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i].first;
		arr[i].second = 1;
	}

	int sum = 0;
	int i = 0;

	while (arr[i].first % x == 0) {
		arr.push_back(make_pair(arr[i].first / x, arr[i].second * x));
		++i;
	}

	for (int i = 0; i < int(arr.size()); ++i) {
		sum += arr[i].first * arr[i].second;
	}

	cout << sum << endl;
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

