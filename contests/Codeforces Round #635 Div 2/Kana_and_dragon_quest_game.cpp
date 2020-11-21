// https://codeforces.com/contest/1337/problem/B
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int health_of_dragon, first_attack, second_attack;
        cin >> health_of_dragon >> first_attack >> second_attack;

        while (first_attack && health_of_dragon > 20) {
            health_of_dragon = (health_of_dragon / 2) + 10;
            first_attack--;
        }

        while (second_attack--) {
            health_of_dragon -= 10;
        }

        cout << (health_of_dragon <= 0 ? "YES" : "NO") << endl;
    }
    return 0;
}