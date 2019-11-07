// https://codeforces.com/contest/1214/problem/B
// @TODO
#include <iostream>
using namespace std;
#define deb(x) cerr << #x << "->" << x << endl;
int divCeil(int a, int b)
{
	return (a % b) ? (a / b) + 1 : a / b;
}
int main()
{
	int boys, girls, badges;
	cin >> boys >> girls >> badges;
	int remaining_boys = boys % badges;
	int remaining_girls = girls % badges;
	int decks = (boys / badges) + (girls / badges) + divCeil(remaining_boys + remaining_girls, badges);
	cout << decks << endl;
	return 0;
}
