// https://codeforces.com/contest/1294/problem/F

// @TODO

/**
 * Explanation:
 * 
 */

#include <iostream>
#include <vector>
#include <queue>
#include <climits>

#define trace(x) cerr << #x << ": " << x << endl;

using namespace std;

const int oo = 1e9;

bool determineLying(vector<vector<int>> &graph, int v, int parent_v, int destination, vector<bool> &lies_on_a_b)
{
	// Uses DFS under the hood

	if (v == destination)
	{
		lies_on_a_b[v] = true;
		return true;
	}

	for (int i = 0; i < graph[v].size(); ++i)
	{
		int child = graph[v][i];

		if (child == parent_v)
			continue;

		if (determineLying(graph, child, v, destination, lies_on_a_b))
		{
			lies_on_a_b[child] = true;
			return true;
		}
	}

	return false;
}

void bfs(vector<vector<int>> &graph, int starting, vector<bool> &visited, vector<int> &depth)
{
	queue<int> q;
	q.push(starting);
	visited[starting] = true;
	depth[starting] = 0;

	while (!q.empty())
	{
		int parent = q.front();
		q.pop();

		for (int connected : graph[parent])
		{
			if (!visited[connected])
			{
				q.push(connected);
				visited[connected] = true;
				depth[connected] = depth[parent] + 1;
			}
		}
	}
}
int main()
{
	int no_of_vertices;
	cin >> no_of_vertices;

	int no_of_edges = no_of_vertices - 1;

	vector<vector<int>> graph(no_of_vertices + 1, vector<int>());
	vector<bool> visited(no_of_vertices + 1, false);
	vector<int> depth(no_of_vertices + 1, 0);

	for (int i = 1; i <= no_of_edges; ++i)
	{
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	bfs(graph, 1, visited, depth);

	int a = 1, b = 1, c = 1;

	int distance_a_to_b = INT_MIN;

	for (int i = 1; i <= no_of_vertices; ++i)
	{
		if (depth[i] > distance_a_to_b)
		{
			distance_a_to_b = depth[i];
			b = i;
		}
	}

	visited.resize(no_of_vertices + 1, false);
	distance_a_to_b = INT_MIN;

	bfs(graph, b, visited, depth);

	for (int i = 1; i <= no_of_vertices; ++i)
	{
		if (depth[i] > distance_a_to_b)
		{
			distance_a_to_b = depth[i];
			a = i;
		}
	}

	// Determining which points lie between a and b
	vector<bool> lies_on_a_b(no_of_vertices + 1, false);
	determineLying(graph, a, 0, b, lies_on_a_b);

	int edges_covered = 0;
	queue<int> q;
	vector<int> distance(no_of_vertices + 1, 0);

	for (int i = 1; i <= no_of_vertices; ++i)
		edges_covered += lies_on_a_b[i];

	for (int i = 1; i <= no_of_vertices; ++i)
	{
		if (lies_on_a_b[i])
		{
			q.push(i);
			distance[i] = 0;
		}
		else
		{
			distance[i] = oo;
		}
	}

	// performing multipoint bfs

	visited.resize(no_of_vertices + 1, false);
	visited[a] = visited[b] = true;
	int new_edges_covered = -1;

	// while(!q.empty())
	// {
	// 	int parent = q.front();
	// 	q.pop();

	// 	for (int connected: graph[parent])
	// 	{
	// 		if (connected != a && connected != b)
	// 		{
	// 			if (distance[connected] > distance[parent] + 1)
	// 			{
	// 				distance[connected] = distance[parent] + 1;
	// 				new_edges_covered = max(new_edges_covered, distance[connected]);
	// 				c = connected;
	// 				q.push(connected);
	// 			}

	// 		}
	// 	}
	// }

	while (!q.empty())
	{
		int v = q.front();
		q.pop();

		if (distance[v] > new_edges_covered && v != a && v != b)
		{
			new_edges_covered = distance[v];
			c = v;
		}

		for (int i = 0; i < graph[v].size(); i++)
		{
			int child = graph[v][i];

			if (distance[child] > distance[v] + 1)
			{
				distance[child] = distance[v] + 1;

				q.push(child);
			}
		}
	}

	edges_covered += new_edges_covered;

	cout << edges_covered << endl;
	cout << a << " " << b << " " << c << endl;
	return 0;
}