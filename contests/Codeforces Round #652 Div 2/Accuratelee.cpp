// https://codeforces.com/contest/1369/problem/B
#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;

		string text;
		cin >> text;

		string ans = "";

		int i = 0;

		if (text[0] == '0') {
			while (i < n && (text[i] == '0')) {
				ans += "0";
				++i;
			}
		}
		
		int j = i;
		bool optimization = false;
		while (j < n && text[j] == '1') {
			++j;
		}
		while (j < n && text[j] == '0') {
			++j;
			optimization = true;
		}

		if (optimization) {
			ans += "0";
		}

		i = int(text.size()) - 1;

		if (text[i] == '1') {
			while (i >= 0 && text[i] == '1') {
				ans += "1";
				--i;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
		
