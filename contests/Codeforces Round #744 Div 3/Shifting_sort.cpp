// https://codeforces.com/contest/1579/problem/B
#include <algorithm>
#include <iostream>
#include <vector>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void leftShift(vector<int>& arr, int left, int right, int places) {
    while (places--) {
        int saved = arr[left];
        for (int i = left; i + 1 <= right; ++i) {
            arr[i] = arr[i + 1];
        }
        arr[right] = saved;
    }
}

struct Shift {
    int l, r, d;
    Shift(int l, int r, int d): l(l), r(r), d(d) {}
};

void solve() {
    int n;
    cin >> n;

    vector<Shift> ans;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i + 1 < n; ++i) {
        int idx = -1;
        int smallest = 1e9;
        for (int j = i + 1; j < n; ++j) {
            if ((arr[i] > arr[j]) && (arr[j] < smallest)) {
                idx = j;
                smallest = arr[j];
            }
        }
        if (idx != -1) {
            Shift lrd(i, idx, abs(i - idx));
            ans.push_back(lrd);
            leftShift(arr, i, idx, abs(i - idx));
        }
    }

    cout << ans.size() << endl;

    if (ans.size() == 0) {
        cout << endl;
    }

    for (auto it : ans) {
        cout << (it.l + 1) << " " << (it.r + 1) << " " << (it.d) << endl;
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
