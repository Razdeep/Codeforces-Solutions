// https://codeforces.com/contest/1121/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define SCI(x) scanf("%d", &x)
#define FORN(i, n) for (int i = 0; i < n; i++)

using std::cin;
using std::cout;
using std::endl;

typedef long long ll;
typedef std::vector<int> vi;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int no_of_candies, i;
    std::unordered_set<int> candies(no_of_candies);
    vi candy_list(no_of_candies);
    SCI(no_of_candies);
    int candy;
    FORN(i, no_of_candies)
    {
        SCI(candy);
        candies.insert(candy);
        candy_list[i] = candy;
    }
    int count = 0, max_count = INT_MIN;
    for (int i = 2; i <= 2 * 1e5; i++)
    {
        count = 0;
        // if(candies.find(i)!=candies.end() && candies.find())
    }

    return 0;
}