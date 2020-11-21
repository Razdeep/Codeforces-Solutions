// https://codeforces.com/contest/1358/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int ans = 1;

        for (int i = 0; i < n; ++i) {
            if (arr[i] <= i + 1) {
                ans = i + 2;
            }
        }

        cout << ans << endl;
    }
}