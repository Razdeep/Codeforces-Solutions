// https://codeforces.com/contest/1325/problem/B
#include <iostream>
#include <set>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n;
		cin >> n;

		set<int> myset;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin >> tmp;
			myset.insert(tmp);
		}
		
		cout << myset.size() << endl;
	}
	return 0;
}
