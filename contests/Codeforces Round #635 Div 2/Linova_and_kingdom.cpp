// https://codeforces.com/contest/1337/problem/C

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#define int ll
#define rall(v) v.rbegin(), v.rend()
typedef long long ll;

using namespace std;

void dfs(const vector<vector<int> >& tree, vector<bool>& visited_2, vector<int>& subtree_size, int current) {

    visited_2[current] = true;

    for (int connected: tree[current]) {
        if (visited_2[connected]) {
            continue;
        }
        dfs(tree, visited_2, subtree_size, connected);
        subtree_size[current] += (1 + subtree_size[connected]);
    }
}
void bfs(const vector<vector<int> >& tree, vector<bool>& visited, vector<int>& depth, int starting) {
    
    queue<int> q;
    q.push(starting);
    visited[starting] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        for (int connected: tree[parent]) {
            if (!visited[connected]) {
                visited[connected] = true;
                q.push(connected);
                depth[connected] = depth[parent] + 1;
            }
        }
    }

}

int32_t main() {
    int no_of_cities, no_of_industry_cities;
    cin >> no_of_cities >> no_of_industry_cities;

    int no_of_edges = no_of_cities - 1;

    vector<vector<int> > tree(no_of_cities + 1);

    vector<int> depth(no_of_cities + 1, 0);
    vector<int> subtree_size(no_of_cities + 1, 0);
    vector<bool> visited(no_of_cities + 1, false);
    vector<bool> visited_2(no_of_cities + 1, false);

    for (int i = 0; i < no_of_edges; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    bfs(tree, visited, depth, 1);
    dfs(tree, visited_2, subtree_size, 1);

    vector<int> contribution(no_of_cities + 1, INT_MIN);

    for (int i = 1; i <= no_of_cities; ++i) {
        contribution[i] = (depth[i] - subtree_size[i]);
    }

    sort(rall(contribution));
    ll sum = 0LL;

    for (int i = 0; i < no_of_industry_cities; ++i) {
        sum += contribution[i];
    }
    
    cout << sum << endl;
    return 0;
}