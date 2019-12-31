// https://codeforces.com/contest/1326/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> b(n);
	for (int i = 0; i < n; ++i)
		cin >> b[i];

	int max_so_far = 0;
	
	cout << b[0] << " ";
	for (int i = 1; i < n; ++i)
	{
		max_so_far = max(max_so_far, b[i - 1]);
		b[i] += max_so_far;
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}
