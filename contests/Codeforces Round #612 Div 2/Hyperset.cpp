// https://codeforces.com/contest/1287/problem/B
// @TODO
#include <iostream>
#include <vector>
#include <map>
typedef long long ll;

using namespace std;

int main()
{
	int no_of_cards, no_of_features;
	cin >> no_of_cards >> no_of_features;

	vector<string> cards(no_of_cards);
	map<string, int> frequency;

	for (int i = 0; i < no_of_cards; ++i)
	{
		cin >> cards[i];
		frequency[cards[i]]++;

		
	}
	return 0;
}