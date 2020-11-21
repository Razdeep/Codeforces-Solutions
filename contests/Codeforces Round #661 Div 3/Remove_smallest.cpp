// https://codeforces.com/contest/1399/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sort(all(arr));
        arr.resize(std::distance(arr.begin(), std::unique(all(arr))));

        if (arr.size() == 1) {
            cout << "YES" << endl;
            continue;
        }

        bool ok = true;
        for (int i = 0; i + 1 < int(arr.size()); ++i) {
            ok &= (arr[i] + 1 == arr[i + 1]);
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}