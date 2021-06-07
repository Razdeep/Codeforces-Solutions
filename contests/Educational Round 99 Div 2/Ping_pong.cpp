// https://codeforces.com/contest/1455/problem/C
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int alice_stamina, bob_stamina;
	cin >> alice_stamina >> bob_stamina;

	alice_stamina--;

	cout << alice_stamina << " " << bob_stamina << endl;
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

