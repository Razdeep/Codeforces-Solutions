// https://codeforces.com/problemset/problem/893/C

#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <climits>
#define pb push_back
#define deb(x) cerr << #x << " -> " << x << endl;
typedef long long ll;
using namespace std;
int bfs(map<int, vector<int>> graph, int no_of_vertex, vector<bool>& visited, vector<int> cost, int starting)
{
	int res = cost[starting];
	queue<int> myqueue;
	myqueue.push(starting);
	visited[starting] = true;
	while(!myqueue.empty())
	{
		int parent = myqueue.front();
		myqueue.pop();
		for (int connected: graph[parent])
		{
			if (!visited[connected])
			{
				visited[connected] = true;
				myqueue.push(connected);
				res = min(res, cost[connected]);
			}
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int no_of_vertex, no_of_edges;
	cin >> no_of_vertex >> no_of_edges;
	vector<int> cost(no_of_vertex + 1, 0);
	for (int i = 1; i <= no_of_vertex; ++i)
		cin >> cost[i];
	map<int, vector<int>> graph;
	vector<bool> visited(no_of_vertex + 1, false);
	visited[0] = true;
	for (int i = 0; i < no_of_edges; ++i)
	{
		int u, v;
		cin >> u >> v;
		graph[u].pb(v);
		graph[v].pb(u);
	}
	ll ans = 0LL;
	for (int i = 1; i <= no_of_vertex; ++i)
	{
		if (!visited[i])
		{
			
			int temp = bfs(graph, no_of_vertex, visited, cost, i);
			//deb(temp);
			ans += temp;
		}
	}
	cout << ans << endl;
	return 0;
}
