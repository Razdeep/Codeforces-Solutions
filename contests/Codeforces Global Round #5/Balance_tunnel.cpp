// @TODO
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	set<pair<int, int>> reg;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		pair<int, int> p = {a[i], i + 1};
		reg.push_back(p);
		a[i] = i + 1;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}
	
	return 0;
}
