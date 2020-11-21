// https://codeforces.com/contest/1426/problem/A

#include <iostream>
using namespace std;

int main() {

	int tc;
	cin >> tc;

	while (tc--) {
		int n, x;
		cin >> n >> x;

		if (n <= 2) {
			cout << "1" << endl;
		} else {
			cout << (((n - 2) % x ? ((n - 2) / x) + 1 : (n - 2) / x) + 1) << endl;
		}
	}
	return 0;
}

