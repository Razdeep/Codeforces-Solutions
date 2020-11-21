// https://codeforces.com/contest/1355/problem/C
#include <iostream>
#include <vector>
#define int ll
typedef long long ll;
using namespace std;

signed main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> prefix_sum(b + c + 5, 0);

    for (int i = a; i <= b; ++i) {
        prefix_sum[i + b]++;
        prefix_sum[i + c + 1]--;
    }

    for (int i = 1; i <= b + c + 1; ++i) {
        prefix_sum[i] += prefix_sum[i - 1];
    }

    for (int i = b + c; i >= 0; --i) {
        prefix_sum[i] += prefix_sum[i + 1];
    }

    int ans = 0;

    for (int i = c; i <= min(d, int(prefix_sum.size())); ++i) {
        ans += prefix_sum[i + 1];
    }
    cout << ans << endl;

    return 0;
}