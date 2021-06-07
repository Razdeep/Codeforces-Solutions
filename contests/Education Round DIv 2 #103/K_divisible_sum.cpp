// https://codeforces.com/contest/1476/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;
 
int myDiv(int a, int b) {
	return a / b + (a % b != 0);
}
 
void solve() {
 
	int n, k;
	cin >> n >> k;
 
	if (k >= n) {
		cout << myDiv(k, n) << endl;
	} else {
		cout << (n % k == 0 ? 1 : 2) << endl;
	}
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
 