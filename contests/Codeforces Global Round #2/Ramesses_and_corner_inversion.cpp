// https://codeforces.com/contest/1119/problem/C
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int> > a(rows, vector<int>(cols, 0));
    vector<vector<int> > b(rows, vector<int>(cols, 0));

    int cnt_a = 0;
    int cnt_b = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> a[i][j];
            cnt_a += a[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> b[i][j];
            cnt_b += b[i][j];
        }
    }

    if (cnt_a % 2 == cnt_b % 2) {
        bool ok = true;
        for (int i = 0; i < rows; ++i) {
            int cnt_col_a = 0;
            int cnt_col_b = 0;
            for (int j = 0; j < cols; ++j) {
                cnt_col_a += a[i][j];
                cnt_col_b += b[i][j];
            }
            ok &= (cnt_col_a % 2 == cnt_col_b % 2);
        }
        for (int i = 0; i < cols; ++i) {
            int cnt_row_a = 0;
            int cnt_row_b = 0;
            for (int j = 0; j < rows; ++j) {
                cnt_row_a += a[j][i];
                cnt_row_b += b[j][i];
            }
            ok &= (cnt_row_a % 2 == cnt_row_b % 2);
        }

        cout << (ok ? "Yes" : "No") << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}