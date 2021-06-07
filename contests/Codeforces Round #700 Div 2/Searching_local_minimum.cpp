// https://codeforces.com/contest/1480/problem/C
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

constexpr int oo = INT_MAX;

void solve() {

	int n;
	cin >> n;

	vector<int> arr(n + 1, oo);

	int left = 1, right = n;
	int input;

	while (left < right) {
		int mid_1 = (left + right) / 2;
		int mid_2 = mid_1 + 1;

		cout << "? " << mid_1 << endl;
		cin >> input;
		arr[mid_1] = input;

		cout << "? " << mid_2 << endl;
		cin >> input;
		arr[mid_2] = input;

		if (arr[mid_1] < arr[mid_2]) {
			right = mid_1;
		} else {
			left = mid_2;
		}
	}

	cout << "! " << right << endl;

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

