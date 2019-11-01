// https://codeforces.com/contest/1196/problem/A
#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
#define all(v) v.begin(), v.end()

using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		cout << (a + b + c) / 2 << endl;
	}
	return 0;
}
