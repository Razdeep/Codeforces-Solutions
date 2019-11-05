// https://codeforces.com/contest/1204/problem/A
// @TODO
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
	string text;
	cin >> text;
	ll n = (ll)(text.size());
	cout << (n & 1 ? n / 2 + 1 : n / 2)  << endl;
	return 0;
}
