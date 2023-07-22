// https://codeforces.com/contest/1850/problem/B
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

    int best_quality = -1;
    int word_length, word_quality;

    int winner = -1;

    for (int i = 0; i < n; ++i) {
        cin >> word_length >> word_quality;

        if (word_length <= 10 and word_quality > best_quality) {
            best_quality = word_quality;
            winner = i + 1;
        }
    }

    cout << winner << endl;
    
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

