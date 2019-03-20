// https://codeforces.com/contest/1141/problem/C
/**
 * Explanation:
 * 
 */
// NOT SOLVED
// GETTING TLE IN TEST 38

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
    vi q(n - 1);
    vi p(n);

    FORN(i, n - 1)
    {
        cin >> q[i];
    }
    bool done = false;
    for (int trial = 1; trial <= n; trial++)
    {
        p[0] = trial;
        for (int i = 1; i < n; i++)
        {
            p[i] = p[i - 1] + q[i - 1];
        }
        vi new_p(n);
        std::copy(all(p), new_p.begin());
        std::sort(all(new_p));
        auto last_ptr = std::unique(all(new_p));
        new_p.resize(std::distance(new_p.begin(), last_ptr));
        if (std::accumulate(all(p), 0LL) == (n * (n + 1) / 2)
            && p.size() == new_p.size()) 
        {
            FORN(i, n)
            cout << p[i] << " ";
            cout << endl;
            done = true;
            break;
        }
    }
    if (!done)
        cout << -1 << endl;
    return 0;
}