// https://codeforces.com/contest/1511/problem/B
// NOT SOLVED

#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int compose(int x) {
	int res = 0;
	while (x--) {
		res *= 10;
		res++;
	}
	return res;
}

int noOfDigits(int x) {
	int res = 0;
	while (x) {
		res++;
		x /= 10;
	}
	return res;
}

int generateMultiple(int gcd, int x) {
	int res = 1;
	while (noOfDigits(res) < x) {
		res *= gcd;
	}

	return res;
}

void solve() {

	int a, b, c;

	cin >> a >> b >> c;

	int gcd = compose(c);

	int target_x = pow(10, a - 1);
	int target_y = pow(10, b - 1);

	int multiplier_x = target_x % gcd ? target_x / gcd + 1 : target_x / gcd;
	int multiplier_y = target_y % gcd ? target_y / gcd + 1 : target_y / gcd;

	int x = multiplier_x * gcd;
	int y = multiplier_y * gcd;

	cout << x << " " << y << endl;

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

