// https://codeforces.com/contest/1352/problem/F
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int zero_ones, one_ones, two_ones;
        cin >> zero_ones >> one_ones >> two_ones;

        string ans = "";

        if (zero_ones) {
            ans += "0";
            for (int i = 0; i < zero_ones; ++i) {
                ans += "0";
            }
        }
        if (two_ones) {
            if (zero_ones) {
                one_ones--;
            }
            ans += "1";
            for (int i = 0; i < two_ones; ++i) {
                ans += "1";
            }
        }

        if (!zero_ones && !two_ones) {
            ans = "1";
        }
        while (one_ones-- > 0) {
            ans += (ans[ans.size() - 1] == '1' ? "0" : "1");
        }

        cout << ans << endl;
    }

    return 0;
}