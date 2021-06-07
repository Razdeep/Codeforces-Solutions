// https://codeforces.com/contest/1451/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
#define int ll

int gcd(int n) {
	int res = 1;
	for (int i = 2; i * i <= n; ++i) {
		int other = n / i;
		if (n % i == 0) {
			res = max(res, other);
		}
	}
	return res;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;
		int ans1 = 0;
		int cp_n = n;
		while (n > 1) {
			int res = gcd(n);
			if (res != 1) {
				n /= res;
			} else {
				n--;
			}
			ans1++;
		}
		n = cp_n - 1;
		int ans2 = 1;
		while (n > 1) {
			int res = gcd(n);
			if (res != 1) {
				n /= res;
			} else {
				n--;
			}
			ans2++;
		}
		cout << min(ans1, ans2) << endl;
	}

	return 0;
}
