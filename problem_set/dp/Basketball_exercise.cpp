// https://codeforces.com/contest/1195/problem/C 
#include <iostream>
#include <vector>
#include <algorithm>
 
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
 
typedef long long ll;
 
using namespace std;
 
void solve() {
    
	int n;
	cin >> n;

	vector<vector<int> > grid(2, vector<int>(n, 0));
	vector<vector<int> > dp(2, vector<int>(n, 0));

	for (int i = 0; i < n; ++i) {
		cin >> grid[0][i];
	}

	for (int i = 0; i < n; ++i) {
		cin >> grid[1][i];
	}

	dp[0][0] = grid[0][0];
	dp[1][0] = grid[1][0];

	for (int i = 1; i < n; ++i) {
		dp[0][i] = grid[0][i] + max(dp[1][i - 1], i - 2 >= 0 ? dp[1][i - 2] : 0);
	       	dp[1][i] = grid[1][i] + max(dp[0][i - 1], i - 2 >= 0 ? dp[0][i - 2] : 0);
	}

	cout << max(dp[0][n - 1], dp[1][n - 1]) << endl;
	
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    // cin >> tc;
 
    while (tc--) {
        solve();
    }
 
    return 0;
}

