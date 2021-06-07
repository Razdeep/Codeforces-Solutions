// https://codeforces.com/contest/1467/problem/C
// NOT SOLVED
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	vector<int> arr(n1);
	vector<int> arr2(n2);
	vector<int> arr3(n3);

	for (int i = 0; i < n1; ++i) {
		cin >> arr1[i];
	}

	for (int i = 0; i < n2; ++i) {
		cin >> arr2[i];
	}

	for (int i = 0; i < n3; ++i) {
		cin >> arr3[i];
	}
	
	sort(all(arr1));
	sort(all(arr2));
	sort(all(arr3));

	int max_element_arr = -1;

	if (arr1.back() == max(arr1.back(), max(arr2.back(), arr3.back()))) {
		max_element_arr = 1;
	} else if (arr2.back() == max(arr1.back(), max(arr2.back(), arr3.back()))) {
		max_element_arr = 2;
	} else {
		max_element_arr = 3;
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

