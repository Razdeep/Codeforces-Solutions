// https://codeforces.com/problemset/problem/1136/B
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(n) i = 0; i < n; i++)
#define _                             \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(NULL);               \
    std::cout.tie(NULL)
#define sci(x) scanf("%d", &x)
#define debugi(x) std::cerr << "\n debug " << x;
#define debugll(x) std::cerr << "\n debug " << x;
#define debugs(x) std::cerr << "\n debug " << x;
#define debugv(x)              \
    std::cerr << "debugv ";    \
    for (auto i : x)           \
        std::cerr << i << " "; \
    std::cerr << endl;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
typedef std::vector<int> vi;
typedef long long ll;

int main()
{
    _;
    int no_of_holes, position;
    cin >> no_of_holes >> position;

    int movement = std::min(position - 1, no_of_holes - position) + no_of_holes - 1;
    int stones_thrown = no_of_holes + 1;
    int coins_picked = no_of_holes;

    int total_moves = movement + stones_thrown + coins_picked;
    cout << total_moves;
    return 0;
}