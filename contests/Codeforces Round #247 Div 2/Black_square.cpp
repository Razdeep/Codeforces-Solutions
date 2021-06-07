// https://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	vector<int> arr(4);

	for (int i = 0; i < 4; ++i) {
		cin >> arr[i];
	}

	string text;
	cin >> text;

	int sum = 0;

	for (int i = 0; i < int(text.size()); ++i) {
		sum += arr[text[i] - '0' - 1];
	}

	cout << sum << endl;

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

