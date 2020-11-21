// https://codeforces.com/contest/1362/problem/B
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#define all(v) v.begin(), v.end()
typedef long long ll;
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n, 0);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        ll sum = std::accumulate(arr.begin(), arr.end(), 0LL);
        sort(all(arr));
        
        int k, done = false;
        for (k = 1; k <= 1024; ++k) {
            vector<int> arr2(arr.begin(), arr.end());

            for (int i = 0; i < n; ++i) {
                arr2[i] = (arr[i] ^ k);
            }

            sort(all(arr2));

            if (std::equal(all(arr), arr2.begin())) {
                done = true;
                break;
            }
        }

        cout << (done ? k : -1) << endl;
    }
    return 0;
}