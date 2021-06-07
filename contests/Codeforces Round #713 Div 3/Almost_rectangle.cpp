// https://codeforces.com/contest/1512/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n;
	cin >> n;

	vector<string> grid(n);

	for (int i = 0; i < n; ++i) {
		cin >> grid[i];
	}

	int row_1 = -1, col_1 = -1;
	int row_2 = -1, col_2 = -1;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (row_1 == -1) {
				if (grid[i][j] == '*') {
					row_1 = i;
					col_1 = j;
				}
			} else {
				if (grid[i][j] == '*') {
					row_2 = i;
					col_2 = j;
				}
			}
		}
	}

	if (row_1 == row_2) {
		if (row_1 == n - 1) {
			grid[row_1 - 1][col_1] = '*';
			grid[row_1 - 1][col_2] = '*';
		} else {
			grid[row_1 + 1][col_1] = '*';
			grid[row_1 + 1][col_2] = '*';
		}
	} else if (col_1 == col_2) {
		if (col_1 == n - 1) {
			grid[row_1][col_1 - 1] = '*';
			grid[row_2][col_1 - 1] = '*';
		} else {
			grid[row_1][col_1 + 1] = '*';
			grid[row_2][col_2 + 1] = '*';
		}
	} else {
		grid[row_1][col_2] = '*';
		grid[row_2][col_1] = '*';
		
		
	}
	for (int i = 0; i < n; ++i) {
		cout << grid[i] << endl;
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

