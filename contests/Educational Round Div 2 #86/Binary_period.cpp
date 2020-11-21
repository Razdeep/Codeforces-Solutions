// https://codeforces.com/contest/1342/problem/B
#include <iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string text;
        cin >> text;

        bool has_zero = false;
        bool has_one = false;

        for (int i = 0; i < int(text.size()); ++i) {
            has_zero |= (text[i] == '0');
            has_one  |= (text[i] == '1');
        }
        string ans = "";

        if (has_zero && has_one) {
            for (int i = 0; i < int(text.size()); ++i) {
                if (ans.size() == 0) {
                    ans.push_back(text[i]);
                    continue;
                }

                if (text[i] == ans[ans.size() - 1]) {
                    ans.push_back((text[i] == '1' ? '0' : '1'));
                }
                ans.push_back(text[i]);
            }
            cout << ans << endl;
        } else {
            cout << text << endl;
        }
    }
}