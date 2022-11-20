// https://codeforces.com/contest/1679/problem/0
#include <iostream>
#include <vector>
#include <algorithm>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    
    long long no_of_wheels;
    cin >> no_of_wheels;

    if ((no_of_wheels & 1) or (no_of_wheels == 2)) {
        cout << -1 << endl;
        return;
    }

    if (no_of_wheels % 4 == 0) {

        int max_bus = no_of_wheels / 4;
        /**
         * Regrouping into groups having 12 wheels each;
         * Here we are rearranging (4 + 4 + 4) to (6 + 6) for each group of busses,
         * whatever remains, we will make a 4-wheeler bus out of it
         */
        int group_size = 12;
        int group_counts = (no_of_wheels / group_size);
        int six_wheeler_busses = 2 * group_counts;
        int four_wheeler_busses = (no_of_wheels % group_size) / 4;
        int min_bus = six_wheeler_busses + four_wheeler_busses;
        cout << min_bus << " " << max_bus << endl;

    } else if (no_of_wheels % 4 == 2) {

        /**
         * One bus would be reserved for 6-wheeler, 
         * rest would be 4 wheeler for max_bus
         */
        int max_bus = 1 + ((no_of_wheels - 6) / 4);
        no_of_wheels -= 6;
        int group_size = 12;
        int group_counts = (no_of_wheels / group_size);
        int min_bus = 1 + (2 * group_counts) + ((no_of_wheels % group_size) / 4);
        cout << min_bus << " " << max_bus << endl;

    } else {
        cout << -1 << endl;
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
