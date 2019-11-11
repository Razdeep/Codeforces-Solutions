#include <iostream>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int stones = 0;
		while(b>=1 && c>=2)
		{
			b--;
			c -= 2;
			stones += 3;
		}
		while(a>=1 && b>=2)
		{
			a--;
			b -= 2;
			stones += 3;
		}
		cout << stones << endl;
	}
	return 0;
}
