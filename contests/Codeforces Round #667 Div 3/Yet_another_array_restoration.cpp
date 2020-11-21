// https://codeforces.com/contest/1409/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
#define trace(x) cout << #x <<  ": " << x << endl;
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int tc;
	cin >> tc;

	while (tc--) {
		int x, y;
		int n;
		cin >> n >> x >> y;
		
		const int diff = y - x;
		vector<int> best_array;
		int minimum_max = int(1e9);

		for (int interval = 1; interval <= diff; ++interval) {
			if (diff % interval == 0) {
				vector<int> this_array;
				int cnt = 0;
				if (x + ((n - 1) * interval) >= y) {
					int cur = x;
					while ((cur <= y) && (cnt <= n)) {
						this_array.push_back(cur);
						cur += interval;
						cnt++;
					}
					cur = x - interval;
					while (cnt < n && cur > 0) {
						this_array.push_back(cur);
						cur -= interval;
						cnt++;
					}
					cur = y + interval;
					while (cnt < n) {
						this_array.push_back(cur);
						cur += interval;
						cnt++;
					}
				
					sort(all(this_array));
					auto this_max_element = *max_element(all(this_array));
					if (this_max_element < minimum_max) {
						minimum_max = this_max_element;
						best_array.clear();
						best_array = this_array;
					}
				}
			}
		}

		for (const auto& it: best_array) {
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}

