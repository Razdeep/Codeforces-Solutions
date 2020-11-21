// https://codeforces.com/contest/1365/problem/0
#include <iostream>
#include <vector>
#include <climits>
#include <queue>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    deque<int> b(n);
    map<int, int> mp;
    int i = 0;

    for (auto &it: a) {
        cin >> it;
        mp[it] = i++;
    }
    for (auto &it: b) {
        cin >> it;
    }

    int ans = INT_MIN;
    
    for (int elem = 0; elem < n; ++elem) {
        deque<int> c = b;
        int this_matches = 0;
        for (int i = 0; i < n; ++i) {
            this_matches += (a[i] == b[i]);
        }
        ans = max(ans, this_matches);
        
    }
    
    cout << ans << endl;

    return 0;
}