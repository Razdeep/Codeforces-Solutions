// https://codeforces.com/contest/1451/problem/E1
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	int xor_12 = 0, xor_23 = 0, xor_13 = 0;
	int and_12 = 0, and_23 = 0, and_13 = 0;
	int sum_12 = 0, sum_23 = 0, sum_13 = 0;

	cout << "XOR 1 2" << endl;
	cin >> xor_12;

	cout << "XOR 2 3" << endl;
	cin >> xor_23;

	cout << "AND 1 2" << endl;
	cin >> and_12;

	cout << "AND 2 3" << endl;
	cin >> and_23;

	cout << "AND 1 3" << endl;
	cin >> and_13;

	xor_13 = xor_12 ^ xor_23;

	sum_12 = xor_12 + (and_12 << 1);
	sum_23 = xor_23 + (and_23 << 1);
	sum_13 = xor_13 + (and_13 << 1);

	vector<int> arr(n + 1, 0);
	
	arr[1] = (sum_12 - sum_23 + sum_13) / 2;
	arr[2] = (sum_12 - arr[1]);
	arr[3] = (sum_13 - arr[1]);

	for (int i = 4; i <= n; ++i) {
		int this_xor;
		cout << "XOR 1 " << i << endl;
		cin >> this_xor;
		arr[i] = this_xor ^ arr[1];
	}

	cout << "! ";

	for (int i = 1; i <= n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
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

