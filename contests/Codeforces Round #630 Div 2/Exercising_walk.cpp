// https://codeforces.com/contest/1332/problem/A
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int left, right, down, up;
        cin >> left >> right >> down >> up;

        int x, y, x1, y1, x2, y2;  
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        x += (right - left);
        y += (up - down);

        cout << ((x >= x1) && (x <= x2) && (y >= y1) && (y <= y2) 
                    && (x2 > x1 || left + right == 0) && (y2 > y1 || up + down == 0)
                        ? "Yes" : "No") << endl;
    }

    return 0;
}