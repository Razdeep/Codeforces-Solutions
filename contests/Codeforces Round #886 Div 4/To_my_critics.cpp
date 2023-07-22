// https://codeforces.com/contest/1850/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
 
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
 
typedef long long ll;
 
using namespace std;
 
void solve() {
    
    int n = 3;
    // cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    cout << (arr[0] + arr[1] >= 10 ? "yes" : "no") << endl;

    
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

