// https://codeforces.com/contest/1087/problem/D
/**
 * Explanation:
 *   Since the diameters are the maximum sum of weights, therefore the diameter vertex must
 *   be leaf vertices. Also, the minimum radius can only be achieved by making all the
 *   vertices with same weights. Hence we calculate diameter.
 * 
 * Hint : Diameter must be equal for all vertices.
 * 
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int no_of_vertices, sum_of_weights;
    cin >> no_of_vertices >> sum_of_weights;
    vector<int> degree(no_of_vertices + 1, 0);
    for (int i = 0; i < no_of_vertices - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }
    int no_of_leaves = 0;
    for (int i = 1; i <= no_of_vertices; i++)
    {
        if (degree[i] == 1)
        {
            no_of_leaves++;
        }
    }
    double radius = ((double)sum_of_weights) / no_of_leaves;
    double diameter = radius * 2;
    cout << setprecision(12) << diameter << endl;
    return 0;
}