// https://codeforces.com/contest/1191/problem/A
#include <iostream>
using namespace std;
int main()
{
	int health;
	cin >> health;
	if (health % 4 == 1)
		cout << "0 A" << endl;
	else if (health % 4 == 3)
		cout << "2 A" << endl;
	else if (health % 4 == 2)
		cout <<  "1 B" << endl;
	else
		cout << "1 A" << endl;
	return 0;
}
