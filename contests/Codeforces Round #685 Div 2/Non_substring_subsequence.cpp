// https://codeforces.com/contest/1451/problem/B
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
 
typedef long long ll;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc;
	cin >> tc;
 
	while (tc--) {
		int n, q;
		cin >> n >> q;
 
		string text;
		cin >> text;
		
		while (q--) {
			int starting, ending;
			cin >> starting >> ending;
			starting--;
			ending--;

			int len = ending - starting + 1;
			string subs = text.substr(starting, len);
			bool ans = false;
			for (int i = 0; i < starting; ++i) {
				if (text[i] == subs[0]) {
					ans = true;
				}
			}
			for (int i = ending + 1; i < text.size(); ++i) {
				if (text[i] == subs[subs.size() - 1]) {
					ans = true;
				}
			}
			cout << (ans ? "YES" : "NO") << endl;
		}
	}
	return 0;
}