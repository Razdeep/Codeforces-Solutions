// https://codeforces.com/problemset/problem/1136/A
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
    ll n, i, k, count = 0;
    cin >> n;
    vector<std::pair<int, int>> chapter(n);
    FORN(i, n)
    cin >> chapter[i].first >> chapter[i].second;
    cin >> k;
    FORN(i, n)
    {
        if (chapter[i].second < k)
            count++;
    }
    cout << n - count << endl;
    return 0;
}