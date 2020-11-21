#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        bool ok = true;
        bool contains_plus = false;
        bool contains_minus = false;

        for (int i = 0; i < n; ++i) {
            if (b[i] > a[i]) {
                if (!contains_plus) {
                    ok = false;
                    break;
                }
            } else if (b[i] < a[i]) {
                if (!contains_minus) {
                    ok = false;
                    break;
                }                
            }
            contains_plus |= (a[i] == 1);
            contains_minus |= (a[i] == -1);
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}