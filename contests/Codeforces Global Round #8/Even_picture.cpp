// https://codeforces.com/contest/1368/problem/C
// @TODO
#include <iostream>
#include <vector>
#include <cmath>
#define trace(x) //cerr << #x << ": " << x << endl;
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 7 << endl;
        cout << "0 0" << endl;
        cout << "0 1" << endl;
        cout << "1 0" << endl;
        cout << "1 1" << endl;
        cout << "1 2" << endl;
        cout << "2 1" << endl;
        cout << "2 2" << endl;
        return 0;
    }
    int root_n = int(ceil(sqrt(n)));
    vector<pair<int, int> > ans;

    for (int i = 1; i <= root_n; ++i) {
        for (int j = 1; j <= root_n; ++j) {
            ans.push_back(make_pair(i, j));
        }
    }

    int all_grey_count = ((root_n - 2) * (root_n - 2));
    // cout << all_grey_count << endl;

    while (all_grey_count < n) {
        for (int i = 1; all_grey_count < n && i <= root_n; ++i) {
            ans.push_back(make_pair(0, i));
            if (i != 1 && i != root_n) {
                all_grey_count++;
                trace("top");
                trace(all_grey_count);
            }
        }
        if (all_grey_count >= n) {
            break;
        }
        for (int i = 1; all_grey_count < n && i <= root_n; ++i) {
            ans.push_back(make_pair(i, 0));
            if (i != root_n) {
                all_grey_count++;
                trace("left");
                trace(all_grey_count);
            }
        }
        if (all_grey_count >= n) {
            break;
        }

        for (int i = 1; all_grey_count < n && i <= root_n; ++i) {
            ans.push_back(make_pair(root_n, i));
            if (i != root_n) {
                all_grey_count++;
                trace("bottom");
                trace(all_grey_count);
            }
        }
        if (all_grey_count >= n) {
            break;
        }

        for (int i = 1; all_grey_count < n && i <= root_n; ++i) {
            ans.push_back(make_pair(i, root_n));
            all_grey_count++;
            trace("right");
            trace(all_grey_count);
        }
        if (all_grey_count >= n) {
            break;
        }
    }

    cout << int(ans.size()) << endl;

    for (auto it : ans) {
        cout << it.first << " " << it.second << endl;
    }


    return 0;
}