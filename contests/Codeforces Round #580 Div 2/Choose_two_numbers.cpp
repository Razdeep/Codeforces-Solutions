// https://codeforces.com/contest/1206/problem/A
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	vector<int> a(n, 0);
	set<int> myset;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		myset.insert(a[i]);
	}
	cin >> m;
	vector<int> b(m, 0);
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
		myset.insert(b[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if (myset.find(a[i] + b[j]) == myset.end())
			{
				cout << a[i] << " " << b[j] << endl;
				return 0;
			}
		}
	}
	return 0;
}
