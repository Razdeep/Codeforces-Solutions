// https://codeforces.com/contest/604/problem/C
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	string text;
	cin >> text;

	int longest_alternating_subsequence = 1;
	for (int i = 1; i < int(text.size()); ++i) {
		if (text[i] != text[i - 1]) {
			longest_alternating_subsequence++;
		}
	}

	cout << min(n, longest_alternating_subsequence + 2) << endl;

	return 0;
}

