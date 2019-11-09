// https://codeforces.com/contest/1228/problem/B

#include <iostream>
#include <vector>
#define MAX 1e3 + 6
typedef long long ll;

using namespace std;
const int MOD = 1e9 + 7;

ll power_mod(ll a, ll b)
{
	if (a == 0)	return 0;
	if (b == 0)	return 1;
	ll tmp = power_mod(a, b / 2) % MOD;
	if (b & 1)
	{
		return (a * tmp * tmp) % MOD;
	}
	else
	{
		return (tmp * tmp) % MOD;
	}
}
int main()
{
	int rows, cols;
	cin >> rows >> cols;
	vector<int> blocked_row_cells(rows + 2, 0);
	vector<int> blocked_col_cells(cols + 2, 0);
	for (int i = 1; i <= rows; ++i)
	{
		cin >> blocked_row_cells[i];
	}
	for (int i = 1; i <= cols; ++i)
	{
		cin >> blocked_col_cells[i];
	}

	// Checking conflict
	for (int i = 1; i <= rows; ++i)
	{
		int first_empty_col_cell = blocked_row_cells[i] + 1;
		if (blocked_col_cells[first_empty_col_cell] >= i)
		{
			cout << "0\n";
			return 0;
		}
	}
	for (int i = 1; i <= cols; ++i)
	{
		int first_empty_row_cell = blocked_col_cells[i] + 1;
		if (blocked_row_cells[first_empty_row_cell] >= i)
		{
			cout << "0\n";
			return 0;
		}
	}
	vector<vector<int>> arr(rows + 1, vector<int>(cols + 1, 2));
	for (int i = 1; i <= rows; ++i)
	{
		int j;
		for (j = 1; j <= blocked_row_cells[i]; ++j)
		{
			arr[i][j] = 1;
		}
		if (j <= cols)
			arr[i][j] = 0;
	}

	for (int j = 1; j <= cols; ++j)
	{
		int i;
		for (i = 1; i <= blocked_col_cells[j]; ++i)
		{
			arr[i][j] = 1;
		}
		if (i <= rows)
			arr[i][j] = 0;
	}


	int cnt = 0;
	for (int i = 1; i <= rows; ++i)
		for (int j = 1; j <= cols; ++j)
			cnt += (arr[i][j] == 2);
	cout << power_mod(2, cnt) << endl;
	return 0;
}
