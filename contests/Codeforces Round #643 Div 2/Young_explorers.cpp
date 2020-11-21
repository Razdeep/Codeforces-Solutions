// https://codeforces.com/contest/1355/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
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

        sort(arr.begin(), arr.end());

        int ans = 0;
        int current_group_size = 0;

        for (int i = 0; i < n; ++i) {
            if (++current_group_size == arr[i]) {
                ans++;
                current_group_size = 0;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}