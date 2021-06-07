// https://codeforces.com/contest/1480/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

int divCeil(int a, int b) {
	return (a % b ? a / b + 1 : a / b);
}

struct Monster {
	int attack, health;
};

void solve() {

	int attack_hero, health_hero, no_of_monsters;
	cin >> attack_hero >> health_hero >> no_of_monsters;

	vector<Monster> monsters(no_of_monsters);

	for (int i = 0; i < no_of_monsters; ++i) {
		cin >> monsters[i].attack;
	}

	for (int i = 0; i < no_of_monsters; ++i) {
		cin >> monsters[i].health;
	}

	sort(all(monsters), [] (Monster a, Monster b) -> bool {
		if (a.attack == b.attack) {
			return a.health > b.health;
		}
		return a.attack < b.attack;
	});

	for (int i = 0; health_hero > 0 && i < no_of_monsters; ++i) {
		int battles_required_here = divCeil(monsters[i].health, attack_hero);
		int battles_hero_can_tolerate = divCeil(health_hero, monsters[i].attack);

		int battles_happened_here = min(battles_required_here, battles_hero_can_tolerate);

		health_hero -= (battles_happened_here * monsters[i].attack);
		monsters[i].health -= (battles_happened_here * attack_hero);
	}

	cout << (monsters.back().health <= 0 ? "YES" : "NO") << endl;;

}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tc = 1;
	cin >> tc;

	while (tc--) {
		solve();
	}
	return 0;
}

