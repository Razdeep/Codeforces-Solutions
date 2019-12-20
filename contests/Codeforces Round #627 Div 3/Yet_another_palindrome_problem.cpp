// https://codeforces.com/contest/1324/problem/B

#include <iostream>
#include <vector>
#include <map>
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
		
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		map<int, int> first_occurrence;
		
		bool possible = false;

		for (int i = 0; i < n; ++i)
		{
			if (first_occurrence.find(arr[i]) == first_occurrence.end())
			{
				first_occurrence[arr[i]] = i;
			}
			else if (i - first_occurrence[arr[i]] >= 2)
			{
				possible = true;
				break;
			}
		}
		
		cout << (possible ? "YES" : "NO") << endl;
	}

	return 0;
}
