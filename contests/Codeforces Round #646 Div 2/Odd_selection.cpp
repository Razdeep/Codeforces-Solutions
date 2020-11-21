// https://codeforces.com/contest/1363/problem/A
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
 
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n, 0);
        int cnt_odd = 0;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            cnt_odd += (arr[i] & 1);
        }

        int cnt_even = n - cnt_odd;

        int max_odds = (cnt_odd & 1 ? cnt_odd : cnt_odd - 1);

        if (cnt_odd == 0) {
            cout << "No" << endl;
        } else if (cnt_even == 0) {
            cout << (x & 1 ? "Yes" : "No") << endl;
        } else {
            cout << (x - max_odds <= cnt_even ? "Yes" : "No") << endl;
        }
    }
}