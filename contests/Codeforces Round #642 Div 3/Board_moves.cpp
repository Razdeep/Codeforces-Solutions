// https://codeforces.com/contest/1353/problem/C
#include <iostream>
typedef long long ll;
#define int ll
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        
        cout << ((n + 1) * n * (n - 1) / 3) << endl;
    }
    return 0;
}