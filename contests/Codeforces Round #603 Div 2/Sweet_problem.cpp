// https://codeforces.com/contest/1263/problem/0
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		vector<int> candies(3);
		int sum = 0;
		for (int i = 0; i < 3; ++i)
		{
			cin >> candies[i];
			sum += candies[i];
		}
		sort(all(candies));
		cout << (candies[0] + candies[1] < candies[2] ? candies[0] + candies[1] : sum / 2) << endl;
	}
	return 0;
}