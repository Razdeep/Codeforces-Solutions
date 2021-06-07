// https://codeforces.com/contest/1512/problem/G
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

constexpr int MAX_N = int(1e7) + 5;
// This is pseudo-sieve
vector<int> divisorSum(MAX_N, 0);;
vector<int> answer(MAX_N, -1);

void solve() {

	int n;
	cin >> n;

	cout << answer[n] << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc = 1;
	cin >> tc;	

	for (int i = 1; i < MAX_N; ++i) {
		for (int multiple = i; multiple < MAX_N; multiple += i) {
			divisorSum[multiple] += i;
		}
	}

	for (int i = 1; i < MAX_N; ++i) {
		if (divisorSum[i] < MAX_N && answer[divisorSum[i]] == -1) {
			answer[divisorSum[i]] = i;
		}
	}

	while (tc--) {
		solve();
	}
	return 0;
}

