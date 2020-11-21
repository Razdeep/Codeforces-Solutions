//  https://codeforces.com/contest/1409/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
#define trace(x) cout << #x <<  ": " << x << endl;
using namespace std;
typedef long long ll;
#define int ll

int operate(int a, int b, int x, int y, int n) {
	int remaining = 0;
	if (a - n < x) {
		remaining = x - (a - n);
		a = x;
	} else {
		a -= n;
	}

	if (remaining > 0) {
		b -= remaining;
	}

	b = max(y, b);
	return a * b;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int tc = 1;
	cin >> tc;

	while (tc--) {
		int a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		
		int ans1 = operate(a, b, x, y, n);
		int ans2 = operate(b, a, y, x, n);

		cout << min(ans1, ans2) << endl;
	}
	return 0;
}

