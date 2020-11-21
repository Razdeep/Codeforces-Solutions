// https://codeforces.com/contest/1360/problem/D
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int requirement, pack_item_limit;
        cin >> requirement >> pack_item_limit;
        
        int max_factor = INT_MIN;

        for (int i = 1; i * i <= requirement; ++i) {
            if (requirement % i == 0) {

                int other = requirement / i;

                if (i <= pack_item_limit) {
                    max_factor = max(max_factor, i);
                }

                if (other <= pack_item_limit) {
                    max_factor = max(max_factor, other);
                }
            }
        }
        
        cout << (requirement % max_factor == 0 ? requirement / max_factor : requirement / max_factor + 1) << endl;
    }

    return 0;
}