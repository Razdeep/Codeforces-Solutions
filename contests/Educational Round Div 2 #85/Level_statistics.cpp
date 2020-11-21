// https://codeforces.com/contest/1334/problem/0
#include <iostream>
#include <algorithm>
#include <vector>
#define all(v) v.begin() v.end()

using namespace std;

int main() {

    int tc;
    cin >> tc;

    while (tc--) {
        
        int n;
        cin >> n;

        bool ok = true;
        int prev_plays = -1, prev_clears = -1;
        for (int i = 0; i < n; ++i) {
            int plays, clears;
            cin >> plays >> clears;

            if (plays < clears) {
                ok = false;
            }
            if (i != 0) {
                if (plays < prev_plays || clears < prev_clears) {
                    ok = false;
                }
                if (plays - prev_plays < clears - prev_clears) {
                    ok = false;
                }
            }
            prev_clears = clears;
            prev_plays = plays;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}