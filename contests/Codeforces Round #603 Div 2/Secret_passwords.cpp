// https://codeforces.com/contest/1263/problem/D
/**
 * Solution using bipartite graphs
 * 
 * Hint: Visualize the problem as a graph problem
 * Then the answer becomes the number of connected components in it
 * 
 */
#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

void bfs(map<int, vector<int>> &graph, map<int, bool> &visited, int starting)
{
	queue<int> q;
	q.push(starting);
	visited[starting] = true;
	while (!q.empty())
	{
		int parent = q.front();
		q.pop();
		for (int connected : graph[parent])
		{
			if (!visited[connected])
			{
				visited[connected] = true;
				q.push(connected);
			}
		}
	}
}
int main()
{
	int no_of_passwords, ans = 0;
	cin >> no_of_passwords;
	vector<string> passwords(no_of_passwords + 27);

	for (int i = 26; i < no_of_passwords + 26; ++i)
		cin >> passwords[i];

	map<int, vector<int>> graph;
	map<int, bool> used;

	for (int i = 26; i < no_of_passwords + 26; ++i)
	{
		string this_password = passwords[i];
		for (int j = 0; j < this_password.size(); ++j)
		{
			used[int(this_password[j]) - 'a'] = true;
			graph[i].push_back(int(this_password[j]) - 'a');
			graph[int(this_password[j]) - 'a'].push_back(i);
		}
	}

	map<int, bool> visited;

	for (int i = 0; i <= 25; ++i)
	{
		if (!visited[i] && used[i])
		{
			bfs(graph, visited, i);
			ans++;
		}
	}

	cout << ans << endl;
	
	return 0;
}