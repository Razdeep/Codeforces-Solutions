// https://codeforces.com/contest/1409/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
#define trace(x) cout << #x <<  ": " << x << endl;
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int tc = 1;
	cin >> tc;

	while (tc--) {
		int a, b;
		cin >> a >> b;

		int diff = abs(b - a);

		int ans = (diff / 10) + (diff % 10 > 0);
		cout << ans << endl;
	}
	return 0;
}
