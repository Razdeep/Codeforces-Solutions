// https://codeforces.com/contest/1191/problem/B
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define deb(x) cerr << #x << " --> " << x << endl;
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	enum Decks { MANZU, PINZU, SOUZU };
	map<int, vector<int>> cards;
	for (int i = 0; i < 3; ++i)
	{
		char suite;
		int value;
		cin >> value >> suite;
		if (suite == 'm')	cards[MANZU].push_back(value);
		else if (suite == 'p')	cards[PINZU].push_back(value);
		else			cards[SOUZU].push_back(value);
	}
	sort(all(cards[MANZU]));
	sort(all(cards[PINZU]));
	sort(all(cards[SOUZU]));
	int prev_card = -1e5, best_streak = -1;
	int same_streak, inc_streak;
	for (int deck = 0; deck < 3; ++deck)
	{
		same_streak = inc_streak = 1;
		for (int this_card : cards[deck])
		{
			if (this_card == prev_card)
			{
				same_streak++;
				if (same_streak > best_streak)
				best_streak = same_streak;
			}
			else if (this_card == prev_card + 1)
			{
				inc_streak++;
				if (inc_streak > best_streak)
					best_streak = inc_streak;
			}
			else if (this_card == prev_card + 2)
			{
				best_streak = max(2, best_streak);
			}	
			else{
				inc_streak = same_streak = 1;
			}
			prev_card = this_card;
		}
	}
	cout << (best_streak == -1 ? 2 : 3 - best_streak) << endl;
	return 0;
}
