// https://codeforces.com/contest/1335/problem/D
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        vector<vector<int> > sudoku(9, vector<int>(9));
        for (int i = 0; i < 9; ++i) {
            string tmp;
            cin >> tmp;
            for (int j = 0; j < 9; ++j) {
                sudoku[i][j] = tmp[j] - '0';
                if (sudoku[i][j] == 1) {
                    sudoku[i][j] = 2;
                }
            }
        }
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cout << sudoku[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}