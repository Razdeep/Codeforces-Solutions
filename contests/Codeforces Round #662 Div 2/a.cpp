#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()

using namespace std;
typedef long long ll;
int divMod(int n) {
    return n % 2 == 0 ? n / 2 + 1 : n / 2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc = 1;
    cin >> tc;

    while (tc--) {
    	int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
        } else if (n <= 3) {
            cout << 2 << endl;
        } else if (n == 4) {
            cout << 3 << endl;
        } else {
            cout << (divMod(n)) << endl;
        }

    }
    return 0;
}


