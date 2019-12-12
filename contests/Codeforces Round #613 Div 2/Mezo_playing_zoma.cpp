// https://codeforces.com/contest/1285/problem/A
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string text;
	cin >> text;

	int cnt_L = 0, cnt_R = 0;

	for (int i = 0; i < n; ++i)
	{
		cnt_L += (text[i] == 'L');
		cnt_R += (text[i] == 'R');
	}

	cout << (cnt_L + cnt_R + 1) << endl;
	return 0;
}