// https://codeforces.com/contest/1401/problem/A
#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;

	while (tc--) {
		int n, k;
		cin >> n >> k;

		if (k >= n) {
			cout << (k - n) << endl;
		} else {
			cout << (k % 2 != n % 2) << endl;
		}
	}
	return 0;
}