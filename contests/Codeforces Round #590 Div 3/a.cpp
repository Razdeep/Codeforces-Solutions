#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		int s = 0;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin >> tmp;
			s += tmp;
		}
		cout << ((s / n) * n >= s ? s / n : (s / n) + 1) << endl;
	}
	return 0;
}
