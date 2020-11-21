// https://codeforces.com/contest/1368/problem/A
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int a, b, n;
        cin >> a >> b >> n;

        int no_of_steps = 0;
        while (a <= n && b <= n) {
            if (a > b) {
                swap(a, b);
            }
            a += b;
            no_of_steps++;
        }

        cout << no_of_steps << endl;
    }
    return 0;
}