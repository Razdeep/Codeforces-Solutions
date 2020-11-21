// https://codeforces.com/contest/1345/problem/A

#include <iostream>
using namespace std;

int main() {

	int tc;
	cin >> tc;

	while (tc--) {
		int rows, cols;
		cin >> rows >> cols;

		if (rows == 1 || cols == 1) {
			cout << "YES" << endl;
			continue;
		}

		if (rows == 2 && cols == 2) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
