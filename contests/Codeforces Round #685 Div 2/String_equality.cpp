// https://codeforces.com/contest/1451/problem/C
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
	
	int tc;
	cin >> tc;

	while (tc--) {
		int n, k;
		cin >> n >> k;

		string a, b;
		cin >> a >> b;
		
		const int NO_OF_ALPHABETS = 26;
		vector<int> freq1(NO_OF_ALPHABETS);
		vector<int> freq2(NO_OF_ALPHABETS);

		for (int i = 0; i < n; ++i) {
			freq1[a[i] - 'a']++;
			freq2[b[i] - 'a']++;
		}

		bool possible = true;

		for (int i = 0; i < NO_OF_ALPHABETS; ++i) {
			if (freq1[i] >= freq2[i]) {
				int extra = freq1[i] - freq2[i];
				if (extra % k == 0) {
					if (extra == 0) {

					} else if (i + 1 < NO_OF_ALPHABETS) {
						freq1[i + 1] += extra;
					} else {
						possible = false;
					}
				} else {
					possible = false;
				}
			} else {
				possible = false;
			}
		}

		cout << (possible ? "Yes" : "No") << endl;
	}
	return 0;
}