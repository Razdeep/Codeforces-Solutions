// https://codeforces.com/contest/1323/problem/A
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n;
		cin >> n;

		vector<int> arr(n);
		vector<int> odd_indices, even_indices;

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (arr[i] & 1)
				odd_indices.push_back(i);
			else
				even_indices.push_back(i);

		}

		if (even_indices.size())
		{
			cout << 1 << endl;
			cout << (even_indices[0] + 1) << endl;
		}
		else if (odd_indices.size() >= 2)
		{
			cout << 2 << endl;
			cout << (odd_indices[0] + 1) << " " << (odd_indices[1] + 1) << endl;
		}
		else
			cout << -1 << endl;
	}
	return 0;
}
