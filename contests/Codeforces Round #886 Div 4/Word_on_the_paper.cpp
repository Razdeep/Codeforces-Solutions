// https://codeforces.com/contest/1850/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
 
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
 
typedef long long ll;
 
using namespace std;
 
void solve() {

    string text;
    string ans;
    
    for (int i = 0; i < 8; ++i) {
        cin >> text;
        for (int letter: text) {
            if (letter != '.') {
                ans.push_back(letter);
            }
        }
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

