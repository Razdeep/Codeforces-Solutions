#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        float n;
        cin >> n;

        n *= 2;

        float interior_angle = (n - 2.0f) * 180.0f / n;
        
        float ans = 1 + (2 * cos(interior_angle / 2));
        ans = max(ans, 2 * sin(interior_angle / 2));
        
        cout << ans << endl;
    }
}