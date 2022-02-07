// https://codeforces.com/contest/1634/problem/C
#include <iostream>
#include <vector>
#include <algorithm>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

bool isPalindrome(string& text) {
    string cp = text;
    reverse(cp.begin(), cp.end());
    return text == cp;
}

void solve() {
    
    int n, k;
    cin >> n >> k;

    string text;
    cin >> text;

    if (isPalindrome(text)) {
        cout << 1 << endl;
    } else if (k > 0) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
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

