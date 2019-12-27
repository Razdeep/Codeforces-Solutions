#include <iostream>
#include <climits>
using namespace std;
int mydiv(int a, int b)
{
	return (a % b == 0 ? a / b : (a / b) + 1);
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n, d;
		cin >> n >> d;
		if (d <= n)
		{
			cout << "Yes" << endl;
			continue;
		}
		int min_ = INT_MAX;
		for (int x = n - 1; x > 0; --x)
		{
			if(x + mydiv(d, x + 1) <= min_)
				min_ = x + mydiv(d, x + 1);
			else
				break;
		}
		cout << (min_ <= n ? "Yes" : "No") << endl;
	}
	return 0;
}