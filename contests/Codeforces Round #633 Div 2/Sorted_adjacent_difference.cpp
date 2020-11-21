// https://codeforces.com/contest/1339/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
typedef long long ll;
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
 
        sort(all(arr));
        vector<int> ans(n);

        int left = 0, right = n - 1;
        int toggle = 1;

        for (int i = n - 1; i >= 0; --i) {
            if (toggle) {
                ans[i] = arr[left++];
            } else {
                ans[i] = arr[right--];
            }
            toggle ^= 1;
        }

        for (int it: ans) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}