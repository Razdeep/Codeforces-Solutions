// https://codeforces.com/contest/1311/problem/D
#include <iostream>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		constexpr int oo  = 1e9;
		constexpr int max = 4e4;
		int best_cost     = oo;
		int A, B, C; 		// Answers

		for (int i = 1; i <= max; ++i)
		{
			for (int j = i; j <= max; j += i)
			{
				for (int k = j; k <= max; k += j)
				{
					int this_cost = abs(a - i) + abs(b - j) + abs(c - k);
					
					if (this_cost < best_cost)
					{
						A = i;
						B = j;
						C = k;
						best_cost = this_cost;
					}
				}
			}
		}

		cout << best_cost << endl;
		cout << A << " " << B << " " << C << endl;
	}
	return 0;
}