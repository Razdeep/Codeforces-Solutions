// https://codeforces.com/contest/1283/problem/A
#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int hours, minutes;
		cin >> hours >> minutes;

		cout << ((23 - hours) * 60 + (60 - minutes)) << endl;
	}
	return 0;
}