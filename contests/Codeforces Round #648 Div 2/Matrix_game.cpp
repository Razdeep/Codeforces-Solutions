// https://codeforces.com/contest/1365/problem/0
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int tc;
    cin >> tc;
 
    while (tc--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int> > arr(n, vector<int>(m, 0));
        set<int> used_col, used_row;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
                if (arr[i][j]) {
                    used_row.insert(i);
                    used_col.insert(j);
                }
            }
        }

        int turn = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if ((used_row.find(i) == used_row.end()) && (used_col.find(j) == used_col.end())) {
                    turn ^= 1;
                    used_row.insert(i);
                    used_col.insert(j);
                    arr[i][j] = 1;
                }
            }
        }
        
        cout << (!turn ? "Vivek" : "Ashish") << endl;
    }
    return 0;
}