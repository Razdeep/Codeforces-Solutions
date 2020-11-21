// https://codeforces.com/contest/1296/problem/C
#include <iostream>
#include <map>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        string text;
        cin >> text;

        int cur_x       = 0;
        int cur_y       = 0;
        map<pair<int, int>, int> mp;
        mp[make_pair(0, 0)] = 0;

        int ans_left    = -1;
        int ans_right   = n;

        for (int i = 0; i < n; ++i) {
            if (text[i] == 'R') {
                cur_x++;
            } else if (text[i] == 'L') {
                cur_x--;
            } else if (text[i] == 'U') {
                cur_y++;
            } else {
                cur_y--;
            }
            pair<int, int> this_pair = make_pair(cur_x, cur_y);
            if (mp.find(this_pair) != mp.end()) {
                int this_interval = (i - mp[this_pair] + 1);
                if (this_interval < (ans_right - ans_left + 1)) {;
                    ans_left = mp[this_pair];
                    ans_right = i;
                }
            }
            mp[this_pair] = i + 1;
        }
        if (ans_left == -1) {
            cout << -1 << endl;
        } else {
            cout << (ans_left + 1) << " " << (ans_right + 1) << endl;
        }
    }
    return 0;
}