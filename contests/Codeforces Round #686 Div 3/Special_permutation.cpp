// https://codeforces.com/contest/1454/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;

		vector<int> arr(n);

		for (int i = 0; i < n; ++i) {
			arr[n - i - 1] = i + 1;
		}

		if (n > 2) {
			swap(arr[n / 2], arr[0]);
			swap(arr[n / 2 + 1], arr[n - 1]);
		}

		for (auto it: arr) {
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}

