// https://codeforces.com/contest/1141/problem/B
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
    ll n, i;
    cin >> n;
    int first_streak = 0;
    ll max_streak = INT_MIN;
    ll this_streak = 0;
    ll resting;
    FORN(i, n)
    {
        cin >> resting;
        if (!first_streak && resting == 0)
        {
            first_streak = this_streak;
            this_streak = 0;
        }
        if (resting == 0)
        {
            this_streak = 0;
        }
        else
        {
            this_streak++;
        }
        max_streak = (this_streak > max_streak ? this_streak : max_streak);
    }
    ll circular_streak = first_streak + this_streak;
    max_streak = (circular_streak > max_streak) ? circular_streak : max_streak;
    cout << max_streak << endl;
    return 0;
}