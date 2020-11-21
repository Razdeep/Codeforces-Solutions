// https://codeforces.com/contest/1426/problem/C

#include <iostream>
#include <climits>
using namespace std;

int main() {

	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;

		if (n == 1) {
			cout << 0 << "\n";
			continue;
		}

		int ans = INT_MAX;

		for (int i = 1; i * i <= n; ++i) {
			int this_required = i + ((n - i) % i ? (n - i) / i + 1 : (n - i) / i) - 1;
			ans = min(ans, this_required);
		}

		cout << ans << "\n";
	}
	return 0;
}

