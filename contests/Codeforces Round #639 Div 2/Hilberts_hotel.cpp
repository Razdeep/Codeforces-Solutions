// https://codeforces.com/contest/1345/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#define int ll
typedef long long ll;
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            arr[i] += (n * int(1e10) + i);
            arr[i] %= n;
        }

        sort(arr.begin(), arr.end());
        bool ok = true;

        for (int i = 0; i < n; ++i) {
            ok &= (arr[i] == i);
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}