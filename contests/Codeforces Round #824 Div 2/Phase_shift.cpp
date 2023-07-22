// NOT SOLVED 
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
 
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
 
typedef long long ll;
 
using namespace std;
 
void solve() {
    
	int n;
	cin >> n;

	string text;
    cin >> text;

    cin.ignore();

    string ans;

    vector<char> mapping(26, -1);
    set<char> used;

    for (int i = 0; i < n; ++i) {
        for (char j = text[i] + 1; j <= 'z'; ++j) {
            if (used.find(j) != used.end()) {
                continue;
            }
            if (text[i] == j) {
                continue;
            }
            if (mapping[text[i] - 'a'] == -1) {
                mapping[text[i] - 'a'] = j;
                used.insert(j);
            }
        }
    }
	
    for (int i = 0; i < n; ++i) {
        ans.push_back(mapping[text[i] - 'a']);
    }

    cout << ans << endl;
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

