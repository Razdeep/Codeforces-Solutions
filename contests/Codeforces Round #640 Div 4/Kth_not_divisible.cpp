#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()

using namespace std;

int mydiv(int a, int b) {
    return (a % b ? a / b + 1 : a / b);
}
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;
        
        cout << (mydiv(k, (n - 1)) + k - 1) << endl;
    }
    return 0;
}