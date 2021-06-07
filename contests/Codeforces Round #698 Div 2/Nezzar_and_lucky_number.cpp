// https://codeforces.com/contest/1478/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

bool containsLucky(int num, int lucky_number) {
    while (num > 0) {
        if (num % 10 == lucky_number) {
            return true;
        }
        num /= 10;
    }
    return false;
}

bool isLucky(int number, int lucky_number) {

	if (number < 0) {
		return false;
	}

	if (number % lucky_number == 0) {
		return true;
	}
	
	if (number >= lucky_number * 10) {
		return true;
	}

	if (containsLucky(number, lucky_number)) {
		return true;
	}

	return isLucky(number - lucky_number, lucky_number);
}

void solve() {

	int n, lucky_number;
	cin >> n >> lucky_number;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {
		cout << (isLucky(arr[i], lucky_number) ? "YES" : "NO") << endl;
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

