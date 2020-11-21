// https://codeforces.com/contest/1360/problem/0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int a, b;
        cin >> a >> b;
        
        if (a > b) {
            swap(a, b);
        }

        cout << max(4 * a * a, b * b) << endl;
    }
    return 0;
}