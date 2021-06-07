// https://codeforces.com/contest/1457/problem/C
// NOT SOLVED
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n, p, k;
	cin >> n >> p >> k;

	string text;
	cin >> text;
	
	int cur_size = int(text.size());
	int time_to_add, time_to_remove;

	cin >> time_to_add >> time_to_remove;
	int ans1 = 0, ans2 = 0;

	int i = 0;
	for (; i < int(text.size()); ) {
		if (text[i] == '0' && text[i + 1] != '0' && cur_size > p) {
			cur_size--;
			++i;
			ans1 += time_to_remove;
		} else {
			ans1 += time_to_add;
		}
		i += k;
	}
	while (i < int(text.size())) {
		if (text[i] == '0') {
			ans1 += time_to_add;
		}
		i += k;
	}


	i = 0;
	while (i < int(text.size())) {
		if (text[i] == '0') {
			ans2 += time_to_add;
		}
		i += k;
	}

	trace(ans1)
	trace(ans2)
	int ans = min(ans1, ans2);
	cout << ans << endl;

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

