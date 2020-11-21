// https://codeforces.com/contest/1352/problem/D
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int start = 0, end = n - 1;
        int last_eaten_alice = 0;
        int last_eaten_bob = 0;
        int bob = 0, alice = 0;
        int ans = 0;
        int turn = 1;

        while (start <= end) {
            int this_eaten = 0;
            if (turn) { // bobs turn
                while (last_eaten_bob >= this_eaten && start <= end) {
                    this_eaten += arr[start];
                    start++;
                }
                last_eaten_alice = this_eaten;
                alice += last_eaten_alice;
            } else {
                while (last_eaten_alice >= this_eaten && start <= end) {
                    this_eaten += arr[end];
                    end--;
                }
                last_eaten_bob = this_eaten;
                bob += last_eaten_bob;
            }
            ans++;
            turn ^= 1;
        }

        cout << ans << " " << alice << " " << bob << endl;
    }
    return 0;
}