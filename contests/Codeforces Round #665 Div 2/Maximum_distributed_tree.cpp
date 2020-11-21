// https://codeforces.com/contest/1401/problem/D
#include <iostream>
#include <vector>
#include <algorithm>
#define int ll
typedef long long ll;
using namespace std;

constexpr int MOD = int(1e9) + 7;
vector<int> edge_visits;

int dfs(const vector<vector<int> >& tree, int cur, int parent) {
    int children_count = 1;
    int n = int(tree.size());
    for (int connected: tree[cur]) {
        if (connected != parent) {
            int this_children = dfs(tree, connected, cur);
            edge_visits.push_back(this_children * (n - this_children));
            children_count += this_children;
        }
    } 
    return children_count;
}

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        edge_visits.clear();

        int n;
        cin >> n;

        vector<vector<int> > tree(n);

        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        int m;
        cin >> m;

        vector<int> p(m);
        for (auto& it: p) {
            cin >> it;
        }
        
        dfs(tree, 0, -1);
        sort(p.begin(), p.end());
        sort(edge_visits.begin(), edge_visits.end());

        // Resizing p if needed
        if (int(p.size()) == n - 1) {
            // do nothing
        } else if (int(p.size()) < n - 1) {
            // Buffering with 1s
            while (int(p.size()) < n - 1) {
                p.push_back(1); 
            }
            sort(p.begin(), p.end());
        } else {
            // Shrinking count of p from m to (n - 1)
            sort(p.begin(), p.end());
            vector<int> p_new;
            for (int i = 0; i <= n - 3; ++i) {
                p_new.push_back(p[i]);
            }
            int prod = 1;
            for (int i = n - 2; i < m; ++i) {
                prod *= p[i];
                prod %= MOD;
            }
            p_new.push_back(prod);
            p.clear();
            p.resize(0);
            p = p_new;
        }

        int ans = 0;

        for (int i = 0; i < n - 1; ++i) {
            ans += (edge_visits[i] % MOD) * (p[i] % MOD);
            ans %= MOD;
        }

        cout << ans << endl;
    }
    return 0;
}