// https://codeforces.com/contest/1480/problem/A
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	string text;
	cin >> text;

	int turn = 1;

	for (int i = 0; i < int(text.size()); ++i) {
		if (turn) {
			cout << (text[i] == 'a' ? 'b' : 'a');
		} else {
			cout << (text[i] == 'z' ? 'y' : 'z');
		}
		turn ^= 1;
	}
	cout << endl;

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

