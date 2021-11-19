// https://codeforces.com/problemset/problem/698/A 
#include <iostream>
#include <vector>
#include <algorithm>
 
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
 
typedef long long ll;
 
using namespace std;

const int oo = int(1e9);

void solve() {
    
	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	vector<vector<int> > dp(n, vector<int>(3, oo));

	// dp[i][x] represents the min number of days we can rest
	
	// Setting up the first day manually
	// We can always rest on the first day
	dp[0][0] = 1;
	// if contest is possible do contest and dont take rest
	dp[0][1] = (arr[0] == 1 || arr[0] == 3 ? 0 : 1);
	// if gym is possible do gym and dont take rest
	dp[0][2] = (arr[0] == 2 || arr[0] == 3 ? 0 : 1);

	// 0 -> rest
	// 1 -> contest
	// 2 -> gym
	for (int i = 1; i < n; ++i) {
		dp[i][0] = 1 + min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]));
		if (arr[i] == 3 || arr[i] == 1) {
			dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
		}

		if (arr[i] == 3 || arr[i] == 2) {
			dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
		}
	}
	
	cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;
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

