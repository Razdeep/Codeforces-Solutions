// https://codeforces.com/contest/1399/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        int ans = INT_MIN;
        vector<int> arr(n);
        vector<int> freq_master(100, 0);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq_master[arr[i]]++;
        }

        for (int target = 1; target <= 100; ++target) {;
            vector<int> freq(all(freq_master));
            int this_ans = 0;

            for (int i = 0; i < n; ++i) {
                int other = target - arr[i];

                if (arr[i] == other) {
                    if ((other > 0) && (freq[arr[i]] > 1) && (freq[other] > 1)) {
                        this_ans++;
                        freq[arr[i]]--;
                        freq[other]--;
                    }
                } else if ((other > 0) && (freq[arr[i]] > 0) && (freq[other] > 0)) {
                    this_ans++;
                    freq[arr[i]]--;
                    freq[other]--;
                }

            }
            ans = max(ans, this_ans);
        }

        cout << ans << endl;
    }
    return 0;
}