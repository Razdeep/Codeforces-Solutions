// https://codeforces.com/contest/1328/problem/A
#include <iostream>
using namespace std;

int mydiv(int a, int b)
{
	return (a % b ? a / b + 1 : a / b);
}
int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int a, b;
		cin >> a >> b;
		
		cout << (mydiv(a, b) * b - a) << endl;
	}
	return 0;
}