// https://codeforces.com/contest/1352/problem/B
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        // Consider all ones and last one an odd
        int last_elem_if_all_ones = (n - (k - 1));
        int last_elem_if_all_twos = (n - 2 * (k - 1));
        if (last_elem_if_all_ones > 0 && last_elem_if_all_ones & 1) {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) {
                cout << 1 << " ";
            }
            cout << (n - (k - 1)) << endl;
        } else if (last_elem_if_all_twos > 0 && last_elem_if_all_twos % 2 == 0) {
            // Consider all twos and last one an even
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) {
                cout << 2 << " ";
            }
            cout << (n - 2 * (k - 1)) << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}