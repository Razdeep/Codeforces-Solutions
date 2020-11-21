// https://codeforces.com/contest/1359/problem/A
#include <iostream>
using namespace std;
 
int main() {
    int tc = 1;
    cin >> tc;
 
    while (tc--) {
        int n, m, k;
        cin >> n >> m >> k;
 
        int cards_each = n / k;
        int winner_joker = min(cards_each, m);
        int remaining_joker = m - winner_joker;
        remaining_joker = (remaining_joker % (k - 1) == 0 ? remaining_joker / (k - 1) : remaining_joker / (k - 1) + 1);
        cout << (winner_joker - remaining_joker) << endl;

    }
}