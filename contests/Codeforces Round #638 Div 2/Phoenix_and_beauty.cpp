// https://codeforces.com/contest/1348/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        sort(arr.begin(), arr.end());
        auto last_ptr = unique(arr.begin(), arr.end());
        arr.resize(std::distance(arr.begin(), last_ptr));

        if (int(arr.size()) > k) {
            cout << -1 << endl;
            continue;
        } else {
            cout << (k * n) << endl;

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < int(arr.size()); ++j) {
                    cout << arr[j] << " ";
                }
                for (int j = 0; j < (k - int(arr.size())); ++j) {
                    cout << 1 << " ";
                }
            }

            cout << endl;
        }
    }
    return 0;
}