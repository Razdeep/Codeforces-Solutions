// https://codeforces.com/contest/1119/problem/B
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, height;
    cin >> n >> height;

    vector<int> arr(n);

    for (auto& it: arr) {
        cin >> it;
    }

    int bottles = 0;
    vector<int> staging;
    bool full = false;

    for (int i = 0; i < n; ++i) {
        staging.resize(i + 1, 0);
        int j = 0;

        for (j = 0; j <= i; ++j) {
            staging[j] = arr[j];
        }
        sort(staging.rbegin(), staging.rend());
        int cur_required_height = 0;
        int this_bottles = 0;
        for (j = 0; j < int(staging.size()); j += 2) {
            if (cur_required_height + staging[j] <= height) {
                cur_required_height += staging[j];
                if (j == int(staging.size() - 1)) {
                    this_bottles++;
                } else {
                    this_bottles += 2;
                }
            } else {
                full = true;
                break;
            }
            
        }
        if (full) {
            break;
        }
        bottles = max(bottles, this_bottles);
    }

    cout << bottles << endl;
    return 0;
}