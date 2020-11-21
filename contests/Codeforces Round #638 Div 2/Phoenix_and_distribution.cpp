// https://codeforces.com/contest/1348/problem/C
// @TODO
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        string text;
        cin >> text;

        sort(text.begin(), text.end());

        if (k == 1) {
            cout << text << endl;
            continue;
        }

        set<char> myset;
        string ans = "";

        for (int i = 0; i < n; ++i) {
            if (i != 0 && ((i % k) == (k - 1))) {
                ans.push_back(text[i]);
                myset.clear();
            }
            myset.insert(text[i]);
            if (myset.size() > 1) {
                ans.push_back(text[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}