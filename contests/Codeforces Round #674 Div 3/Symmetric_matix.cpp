// https://codeforces.com/contest/1426/problem/B

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int tc;
	cin >> tc;

	while (tc--) {
		int n, m;
		cin >> n >> m;

		vector<vector<vector<int> > > arr(n, vector<vector<int> >(2, vector<int>(2, 0)));
		bool has_equal = false;

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < 2; ++j) {
				for (int k = 0; k < 2; ++k) {
					cin >> arr[i][j][k];
				}
			}
		}
		
		for (int i = 0; i < n; ++i) {
			has_equal |= (arr[i][0][1] == arr[i][1][0]);
		}
		
		if (m & 1) {
			cout << "NO" << endl;
		} else {
			cout << (has_equal ? "YES" : "NO") << endl;
		}
	}
	return 0;
}

