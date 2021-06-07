// https://codeforces.com/contest/1474/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
void solve() {

	int d;
	cin >> d;

	int first_prime = 1, second_prime = 1;

	for (int i = d + 1; ; ++i) {
		if (isPrime(i)) {
			first_prime = i;
			break; 
		}
	}

	for (int i = first_prime + d; ; ++i) {
		if (isPrime(i)) {
			second_prime = i;
			break;
		}
	}

	cout << (first_prime * second_prime) << endl;

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

