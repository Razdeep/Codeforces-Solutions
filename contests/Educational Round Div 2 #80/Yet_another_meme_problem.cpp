// https://codeforces.com/contest/1288/problem/B
// @TODO
#include <iostream>
#define int long long
using namespace std;
bool allNines(int n)
{
	while (n)
	{
		if (n % 10 != 9)
			return false;
		n /= 10;
	}
	return true;
}
int noOfDigits(int n)
{
	int res = 0;
	while(n)
	{
		n /= 10;
		res++;
	}
	return res;
}
int32_t main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
			swap(a, b);
		cout << (a * (allNines(b) ? noOfDigits(b) : noOfDigits(b) - 1)) << endl;
	}
	return 0;
}