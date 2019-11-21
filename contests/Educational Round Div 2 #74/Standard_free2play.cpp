// https://codeforces.com/contest/1238/problem/C
// @TODO
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int h, n;
		cin >> h >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		sort(rall(arr));
		arr.push_back(0);
		int crystals = 0;
		int i = 0;
		int player = h;
		while (i < n)
		{
			while (arr[i] > player + 1)
			{
				crystals++;
				i++;
				player = arr[i];
			}
			i++;	
		}
		cout << crystals << endl;
	}
	return 0;
}
