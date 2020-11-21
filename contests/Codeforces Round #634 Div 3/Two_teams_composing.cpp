// https://codeforces.com/contest/1335/problem/C
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        set<int> myset;
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
            myset.insert(arr[i]);
        }

        int max_freq = -1e9;
        int most_frequent_element = -1;

        for (int i = 0; i <= n; ++i) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
                most_frequent_element = i;
            }
        }

        if (int(myset.size()) == freq[most_frequent_element]) {
            cout << freq[most_frequent_element] - 1 << endl;
        } else {
            cout << min(int(myset.size()), max_freq) << endl;
        }
    }
}