// https://codeforces.com/contest/1512/problem/C
// NOT SOLVED

#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int zeros, ones;
	cin >> zeros >> ones;

	int desired_ones = ones;
	int desired_zeros = zeros;

	string text;
	cin >> text;

	if (text.size() == 1) {
		if (text[0] == '?') {
			cout << (zeros ? '0' : '1') << endl;
		} else {
			if (text == "0" && zeros == 1) {
				cout << text << endl;
			} else if (text == "1" && ones == 1) {
				cout << text << endl;
			} else {
				cout << -1 << endl;
			}
			
		}
		return;
	}

	int n = int(text.size());

	bool valid = true;

	for (int i = 0; i < n; ++i) {
		if (text[i] != '?' && text[n - i - 1] != '?') {
			if (text[i] != text[n - i - 1]) {
				valid = false;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		if (text[i] == '?') {
			if (text[n - i - 1] == '?') {
				// Do nothing
			} else {
				if (text[n - i - 1] == '1') {
					ones--;
					if (ones < 0) {
						trace("a");
						valid = false;
					}
					text[i] = '1';
				} else {
					zeros--;
					if (zeros < 0) {
						valid = false;
					}
					text[i] = '0';
				}
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		if (text[i] == '?' && text[n - i - 1] == '?') {
			// Two choices
			if (ones >= 2) {
				text[i] = text[n - i - 1] = '1';
				ones -= 2;
			} else if (zeros >= 2) {
				text[i] = text[n - i - 1] = '0';
				zeros -= 2;
			} else {
				valid = false;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		if (text[i] == '?') {
			
			valid = false;
		}
	}

	int final_ones = 0;

	for (int i = 0; i < n; ++i) {
		final_ones += (text[i] == '1');
	}
	
	int final_zeros = n - final_ones;

	// trace(final_ones)
	// trace(final_zeros)

	if (final_ones != desired_ones) {
		valid = false;
	}

	if (final_zeros != desired_zeros) {
		valid = false;
	}


	if (!valid) {
		cout << -1 << endl;
	} else {
		cout << text << endl;
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

