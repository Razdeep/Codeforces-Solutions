// https://codeforces.com/contest/1401/problem/C

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int min_array = INT_MAX;

        for (auto& it: a) {
            cin >> it;
            min_array = min(min_array, it);
        }

        vector<int> b(all(a));
        sort(all(b));

        bool ok = true;

        for (int i = 0; i < n; ++i) {
            if (a[i] == b[i]) {
                continue;
            } else {
                ok &= (a[i] % min_array == 0);
            }
        }


        cout << (ok ? "YES" : "NO") << endl;
    }
}