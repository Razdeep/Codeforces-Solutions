// https://codeforces.com/contest/1141/problem/0
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
ll calc(ll multiplier)
{
    ll count = 0;
    while (multiplier > 1)
    {
        if (multiplier % 3 == 0)
        {
            multiplier /= 3;
            count++;
        }
        else if (multiplier % 2 == 0)
        {
            multiplier /= 2;
            count++;
        }
        else
            return -1;
    }
    return count;
}
int main()
{
    _;
    ll n, m;
    cin >> n >> m;
    if (m % n)
    {
        cout << -1 << endl;
        return 0;
    }
    ll multiplier = (m / n);
    int answer = calc(multiplier);
    cout << answer << endl;
    return 0;
}