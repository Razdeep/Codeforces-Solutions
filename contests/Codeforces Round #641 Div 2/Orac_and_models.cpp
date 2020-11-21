#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }
    }

    return 0;
}