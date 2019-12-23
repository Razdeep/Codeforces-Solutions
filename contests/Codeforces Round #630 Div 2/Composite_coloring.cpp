// https://codeforces.com/contest/1332/problem/B

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	
	int tc;
	cin >> tc;

	while (tc--) {
		
		int n;
		cin >> n;

		vector<int> arr(n), ans(n, 0);

		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
		map<int, int> mp;
		int max_class = 0;
		int last_color = 1;

		for (int i = 0; i < n; ++i) {
			
			for (int j = 0; j < 11; ++j) {

				if (arr[i] % primes[j] == 0) {

					if (mp.find(primes[j]) == mp.end()) {
						mp[primes[j]] = last_color;
						last_color++;
					}
					ans[i] = mp[primes[j]];
					max_class = max(max_class, mp[primes[j]]);
					break;
				}
			}
		}

		cout << max_class << endl;

		for (const auto& it: ans)
			cout << it << " ";
		
		cout << endl;
	}
	return 0;
}
