// https://codeforces.com/contest/1359/problem/B
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int tc = 1;
    cin >> tc;
 
    while (tc--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        vector<vector<int> > arr(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i) {
            string text;
            cin >> text;

            for (int j = 0; j < m; ++j) {
                arr[i][j] = (text[j] == '*');
            }
        }
        int ans = 0;
        if (y <= 2 * x) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j + 1 < m; ++j) {
                    if (arr[i][j] == 0) {
                        if (arr[i][j + 1] == 0) {
                            ans += y;
                            arr[i][j] = arr[i][j + 1] = 1;
                        } else {
                            arr[i][j] = 1;
                            ans += x;
                        }
                    }
                }
                if (arr[i][m - 1] == 0) {
                    ans += x;
                }
            }
        } else {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    ans += (arr[i][j] == 0 ? x : 0);
                }
            }
        }
        cout << ans << endl;
    }
}