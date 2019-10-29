// https://codeforces.com/contest/1189/problem/B
#include <algorithm>
#include <iostream>
#include <vector>
#define all(v) v.begin(), v.end()
#define For(i, n) for (__typeof(i) i = 0; i < n; ++i)
#define deb(x) cerr << #x << " --> " << x << endl;
typedef long long ll;

using namespace std;

int main() {
  ll n, i;
  cin >> n;
  vector<ll> arr(n, 0LL);
  For(i, n) { cin >> arr[i]; }
  sort(all(arr));
  int tmp = arr[arr.size() - 1];
  arr[arr.size() - 1] = arr[arr.size() - 2];
  arr[arr.size() - 2] = tmp;
  bool ok = true;
  for (i = 1; i + 1 < arr.size(); ++i) {
    if (arr[i] >= arr[i - 1] + arr[i + 1])
      ok = false;
  }
  if (arr[0] >= arr[1] + arr[arr.size() - 1])
    ok = false;
  if (arr[arr.size() - 1] >= arr[arr.size() - 2] + arr[0])
    ok = false;
  if (ok) {
    cout << "YES" << endl;
    For(i, arr.size()) { cout << arr[i] << " "; }
  } else
    cout << "NO";
  cout << endl;
  return 0;
}
