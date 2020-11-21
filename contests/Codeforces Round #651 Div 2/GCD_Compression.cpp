// https://codeforces.com/contest/1370/problem/B
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    
    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(2 * n);
        vector<int> odd_indices, even_indices;
        vector<pair<int, int> > ans;

        for (int i = 0; i < 2 * n; ++i) {
            cin >> arr[i];
            if (arr[i] & 1) {
                odd_indices.push_back(i + 1);
            } else {
                even_indices.push_back(i + 1);
            }
        }

        for (int i = 0; i + 1 < int(odd_indices.size()); i += 2) {
            ans.push_back(make_pair(odd_indices[i], odd_indices[i + 1]));
        }
        
        for (int i = 0; i + 1 < int(even_indices.size()); i += 2) {
            ans.push_back(make_pair(even_indices[i], even_indices[i + 1]));
        }

        for (int i = 0; i < n - 1; ++i) {
            cout << ans[i].first << " " << ans[i].second << endl;
        }

    }
    return 0;
}