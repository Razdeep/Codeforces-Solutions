// https://codeforces.com/contest/1354/problem/B
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string text;
        cin >> text;

        int n = text.size();
        vector<int> last_1(n, -1), last_2(n, -1), last_3(n, -1);
        int ans = INT_MAX;
        if (text[0] == '1') {
            last_1[0] = 0;
        } else if (text[0] == '2') {
            last_2[0] = 0;
        } else {
            last_3[0] = 0;
        }
        for (int i = 1; i < text.size(); ++i) {
            if (text[i] == '1') {
                if (last_2[i - 1] != -1 && last_3[i - 1] != -1) {
                    ans = min(ans, i - min(last_2[i - 1], last_3[i - 1]));
                }
                last_1[i] = i;
                last_2[i] = last_2[i - 1];
                last_3[i] = last_3[i - 1];
            } else if (text[i] == '2') {
                if (last_1[i - 1] != -1 && last_3[i - 1] != -1) {
                    ans = min(ans, i - min(last_1[i - 1], last_3[i - 1]));
                }
                last_1[i] = last_1[i - 1];
                last_2[i] = i;
                last_3[i] = last_3[i - 1];
            } else {
                if (last_1[i - 1] != -1 && last_2[i - 1] != -1) {
                    ans = min(ans, i - min(last_1[i - 1], last_2[i - 1]));
                }
                last_1[i] = last_1[i - 1];
                last_2[i] = last_2[i - 1];
                last_3[i] = i;
            }
        }
        
        cout << (ans == INT_MAX ? 0 : ans + 1) << endl;
    }
}