// https://codeforces.com/contest/1579/problem/A
#include <algorithm>
#include <iostream>
#include <vector>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    string text;
    cin >> text;

    int a_s = 0;
    int b_s = 0;
    int c_s = 0;

    for (int i = 0; i < int(text.size()); ++i) {
        a_s += text[i] == 'A';
        b_s += text[i] == 'B';
        c_s += text[i] == 'C';
    }

    cout << (b_s == a_s + c_s ? "YES" : "NO") << endl;
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
 