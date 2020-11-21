// https://codeforces.com/contest/1367/problem/C
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
 
    while (tc--) {
        int n, k;
        cin >> n >> k;

        string text;
        cin >> text;

        int ans = 0;
        int last_one = 0;
        for (int i = 0 ; i < n; ) {
            if (text[i] == '1') {
                i += (k + 1);
            } else {
                bool possible = true;
                int j;
                for (j = i + 1; j < min(n, i + k + 1); ++j) {
                    if (text[j] == '1') {
                        possible = false;
                        last_one = j;
                    }
                }
                for (j = i - 1; j >= max(0, i - k); --j) {
                    if (text[j] == '1') {
                        possible = false;
                    }
                }
                if (possible) {
                    ans++;
                    i += (k + 1);
                } else {
                    i = last_one + k + 1;
                }
                
            }
        }

        cout << ans << endl;

    }
    return 0;
}