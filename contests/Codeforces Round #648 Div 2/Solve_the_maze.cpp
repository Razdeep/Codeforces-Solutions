// https://codeforces.com/contest/1365/submission/106302480
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int no_of_rows, no_of_cols;

bool isValid(int r, int c) {
	return r >= 0 && r < no_of_rows && c >= 0 && c < no_of_cols;
}

void solve() {

	// int no_of_rows, no_of_cols;
	cin >> no_of_rows >> no_of_cols;

	vector<vector<char> > maze(no_of_rows, vector<char> (no_of_cols, '.'));

	int good_count = 0;

	for (int i = 0; i < no_of_rows; ++i) {
		string temp_maze_line;
		cin >> temp_maze_line;
		for (int j = 0; j < no_of_cols; ++j) {
			maze[i][j] = temp_maze_line[j];
			good_count += temp_maze_line[j] == 'G';
		}
	}

	for (int i = 0; i < no_of_rows; ++i) {
		for (int j = 0; j < no_of_cols; ++j) {
			if (maze[i][j] == 'B') {
				if (isValid(i - 1, j) && maze[i - 1][j] == '.') {
					maze[i - 1][j] = '#';
				}
				if (isValid(i + 1, j) && maze[i + 1][j] == '.') {
					maze[i + 1][j] = '#';
				}
				if (isValid(i, j - 1) && maze[i][j - 1] == '.') {
					maze[i][j - 1] = '#';
				}
				if (isValid(i, j + 1) && maze[i][j + 1] == '.') {
					maze[i][j + 1] = '#';
				}
			}
		}
	}

	vector<vector<bool> > visited(no_of_rows, vector<bool>(no_of_cols, false));
	
	if (maze[no_of_rows - 1][no_of_cols - 1] != '.') {
		if (good_count == 0) {
			cout << "Yes" << endl;
			return;
		}
		cout << "No" << endl;
		return;
	}

	queue<pair<int, int> > q;
	q.push(make_pair(no_of_rows - 1, no_of_cols - 1));
	visited[no_of_rows - 1][no_of_cols - 1] = true;

	while (!q.empty()) {
		pair<int, int> parent = q.front();
		q.pop();
		int cur_row = parent.first;
		int cur_col = parent.second;
		if (isValid(cur_row - 1, cur_col) && maze[cur_row - 1][cur_col] != '#' && !visited[cur_row - 1][cur_col]) {
			visited[cur_row - 1][cur_col] = true;
			q.push(make_pair(cur_row - 1, cur_col));
		}
		if (isValid(cur_row + 1, cur_col) && maze[cur_row + 1][cur_col] != '#' && !visited[cur_row + 1][cur_col]) {
			visited[cur_row + 1][cur_col] = true;
			q.push(make_pair(cur_row + 1, cur_col));
		}
		if (isValid(cur_row, cur_col - 1) && maze[cur_row][cur_col - 1] != '#' && !visited[cur_row][cur_col - 1]) {
			visited[cur_row][cur_col - 1] = true;
			q.push(make_pair(cur_row, cur_col - 1));
		}
		if (isValid(cur_row, cur_col + 1) && maze[cur_row][cur_col + 1] != '#' && !visited[cur_row][cur_col + 1]) {
			visited[cur_row][cur_col + 1] = true;
			q.push(make_pair(cur_row, cur_col + 1));
		}
	}

	bool ok = true;

	for (int i = 0; i < no_of_rows; ++i) {
		for (int j = 0; j < no_of_cols; ++j) {
			if ((maze[i][j] == 'G' && !visited[i][j]) || (maze[i][j] == 'B' && visited[i][j])) {
				ok = false;
			}
		}
	}

	cout << (ok ? "Yes" : "No") << endl;
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

