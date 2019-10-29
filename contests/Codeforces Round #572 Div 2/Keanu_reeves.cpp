// https://codeforces.com/contest/1189/problem/A
#include <bits/stdc++.h>
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define _                                                                      \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
typedef long long ll;
using namespace std;

const ll INF = 9223372036854775807;
bool isGood(string a) {
  int i, count_ones = 0;
  For(i, a.size()) { count_ones += (a[i] == '1'); }
  return count_ones != (a.size() - count_ones);
}
void solve() {
  ll n;
  cin >> n;
  string text;
  cin >> text;
  if (n == 1 || isGood(text)) {
    cout << 1 << endl;
    cout << text << endl;
    return;
  }
  for (int i = 1; i < text.size(); i++) {
    if (isGood(text.substr(0, i)) && isGood(text.substr(i, text.size()))) {
      cout << 2 << endl;
      cout << text.substr(0, i) << " " << text.substr(i, text.size()) << endl;
      return;
    }
  }
}
int main() {
  _;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ll testcases = 1;
  // cin >> testcases;
  while (testcases--)
    solve();
  return 0;
}
