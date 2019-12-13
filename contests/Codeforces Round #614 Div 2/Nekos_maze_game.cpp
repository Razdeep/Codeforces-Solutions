// https://codeforces.com/contest/1293/problem/C
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n, queries;
	cin >> n >> queries;

	vector<vector<int>> lava(3, vector<int>(n + 1, false));

	int blockedPairs = 0;

	while (queries--)
	{
		int row, col;
		cin >> row >> col;

		lava[row][col] ^= 1;

		if (lava[row][col])
		{
			for (int dy = -1; dy <= 1; ++dy)
			{
				if (col + dy < 1 || col + dy > n)
					continue;

				if (lava[3 - row][col + dy])
					blockedPairs--;
			}
		}
		else // Not Lava[row][col]
		{
			for (int dy = -1; dy <= 1; ++dy)
			{
				if (col + dy < 1 || col + dy > n)
					continue;

				if (lava[3 - row][col + dy])
					blockedPairs++;
			}
		}

		cout << (blockedPairs ? "No" : "Yes") << endl;
	}
	
	return 0;
}