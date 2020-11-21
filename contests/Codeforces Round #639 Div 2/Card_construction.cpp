// https://codeforces.com/contest/1345/problem/B
#include <iostream>
#include <cmath>
#define int ll
typedef long long ll;
using namespace std;

signed main() {

	int tc;
	cin >> tc;

	while (tc--) {
		int cards;
		cin >> cards;
		
		int ans = 0;
	
		for (int i = sqrt(cards); i >= 1; --i) {
			int reach = i * (3 * i + 1) / 2;

			while (cards >= reach) {
				cards -= reach;
				ans++;
			}
		}	
		cout << ans << endl;
	}

	return 0;
}
