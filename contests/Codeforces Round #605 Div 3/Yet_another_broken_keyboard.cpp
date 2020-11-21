// https://codeforces.com/contest/1272/problem/C

#include <iostream>
#include <set>
#define int ll
typedef long long ll;
using namespace std;

signed main() {
		
	int text_len, no_of_good_keys;
	cin >> text_len >> no_of_good_keys;

	string text;
	cin >> text;

	set<char> myset;

	for (int i = 0; i < no_of_good_keys; ++i) {
		char this_good_key;
		cin >> this_good_key;

		myset.insert(this_good_key);
	}

	int n = int(text.size());
	int ans = 0;

	for (int i = 0; i < n; ) {
		while (i < n && myset.find(text[i]) == myset.end()) { // not found
			++i;
		}

		if (i == n) {
			break;
		}

		int j = i;
		while (j < n && myset.find(text[j]) != myset.end()) { // found
			++j;
		}

		int this_len = (j - 1) - (i - 1);
		ans += (this_len * (this_len + 1)) / 2;

		i = j;
	}

	cout << ans << endl;
	
	return 0;
}
