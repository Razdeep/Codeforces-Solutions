// https://codeforces.com/contest/1399/problem/D
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        string text;
        cin >> text;

        vector<int> ans(n);
        stack<int> available_one;
        stack<int> available_zero;
        int last = 1;
        for (int i = 0; i < n; ++i) {
            char current = text[i];
            if (current == '1') {
                if (available_zero.empty()) {
                    ans[i] = last;
                    available_one.push(last);
                    last++;
                } else {
                    ans[i] = available_zero.top();
                    available_zero.pop();
                    available_one.push(ans[i]);
                }
            } else { // current == 0
                if (available_one.empty()) {
                    ans[i] = last;
                    available_zero.push(last);
                    last++;
                } else {
                    ans[i] = available_one.top();
                    available_one.pop();
                    available_zero.push(ans[i]);
                }
            }
        }
        cout << (last - 1) << endl;
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}