// https://codeforces.com/contest/1365/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    int tc;
    cin >> tc;
 
    while (tc--) {
        ll n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool has_ones = false;
        bool has_zeros = false;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            if (b[i]) {
                has_ones = true;
            } else {
                has_zeros = true;
            }
        }
        if (has_zeros && has_ones) {
            cout << "Yes" << endl;
        } else {
            vector<int> c(a.begin(), a.end());
            sort(c.begin(), c.end());

            cout << (std::equal(a.begin(), a.end(), c.begin()) ? "Yes" : "No") << endl;
        }

    }
    return 0;
}