// https://codeforces.com/contest/1367/problem/B
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
 
int main() {
    int tc;
    cin >> tc;
 
    while (tc--) {
        int n;
        cin >> n;

        int cnt_even = 0;
        int cnt_odd = 0;
        vector<int> arr(n);
        int misplace = 0;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];

            if (i % 2 != arr[i] % 2) {
                cnt_odd += (arr[i] & 1);
                cnt_even += (arr[i] % 2 == 0);
            }
        }

        cout << (abs(cnt_odd - cnt_even) <= 0 ? (cnt_even + cnt_odd) / 2 : -1) << endl;

    }
    return 0;
}