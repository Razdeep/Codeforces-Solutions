// https://codeforces.com/contest/1555/problem/B
#include <algorithm>
#include <climits>
#include <iomanip>
#include <iostream>
#include <vector>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    int ans = INT_MAX;

    int room_width, room_height;
    cin >> room_width >> room_height;

    int table_1_x1, table_1_y1, table_1_x2, table_1_y2;

    cin >> table_1_x1 >> table_1_y1 >> table_1_x2 >> table_1_y2;

    int table_2_width, table_2_height;
    cin >> table_2_width >> table_2_height;

    int vacant_height = room_height - (table_1_y2 - table_1_y1);
    int vacant_width = room_width - (table_1_x2 - table_1_x1);

    if (vacant_height < table_2_height && vacant_width < table_2_width) {
        cout << -1 << endl;
        return;
    }

    if (vacant_height >= table_2_height) {
        ans = min(ans, max(0LL, table_2_height - table_1_y1));
        ans = min(ans, max(0LL, table_1_y2 - (room_height - table_2_height)));
    }

    if (vacant_width >= table_2_width) {
        ans = min(ans, max(0LL, table_2_width - table_1_x1));
        ans = min(ans, max(0LL, table_1_x2 - (room_width - table_2_width)));
    }

    cout << std::fixed << std::setprecision(9) << float(ans) << endl;
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
