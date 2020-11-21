// https://codeforces.com/contest/1360/problem/B
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int ans = INT_MAX;
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        for (int i = 0; i + 1 < n; ++i) {
            ans = min(ans, arr[i + 1] - arr[i]);
        }
        
        cout << ans << endl;
    }
}