// https://codeforces.com/contest/1334/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main() {
    int tc;
    cin >> tc;
    
    while (tc--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(all(arr));
        int ans = 0, gov = 0;

        if (sum / n >= x) {
            cout << n << endl;
            continue;
        }
        int cur_n = n;

        for (int i = 0; i < n; ++i) {
            sum -= arr[i];
            cur_n--;
            if (cur_n == 0) {
                cout << 0 << endl;
                break;
            }
            if (sum / cur_n >= x) {
                cout << cur_n << endl;
                break;
            }
        }
    }
}