// https://codeforces.com/contest/1360/problem/C
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
        int cnt_odd = 0;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            cnt_odd += (arr[i] & 1);
        }
        int cnt_even = n - cnt_odd;
        sort(arr.begin(), arr.end());

        bool has_adjacent_elements = false;

        for (int i = 1; i < n; ++i) {
            has_adjacent_elements |= (arr[i] - arr[i - 1] == 1);
        }

        if (cnt_even % 2 == 0 && cnt_odd % 2 == 0) {
            cout << "YES" << endl;
        } else if ((cnt_even & 1) && (cnt_odd & 1)) {
            cout << (has_adjacent_elements ? "YES" : "NO") << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}