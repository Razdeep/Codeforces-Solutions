// https://codeforces.com/contest/1343/problem/B
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        ll n;
        cin >> n;


        if (n % 4 != 0) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> arr(n);
        ll even_sum = 0;
        for (int i = 0; i < n / 2; ++i) {
            arr[i] = (2 * (i + 1));
            even_sum += (2 * (i + 1));
        }

        ll odd_sum = 0;
        ll cur = 1;

        for (int i = n / 2; i < n - 1; ++i) {
            arr[i] = cur;
            odd_sum += cur;
            cur += 2;
        }

        arr[arr.size() - 1] = (even_sum - odd_sum);

        cout << "YES" << endl;
        for (int it: arr) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}