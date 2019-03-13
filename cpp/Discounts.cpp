// https://codeforces.com/problemset/problem/1132/B
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
#define debugv(x)         \
    std::cerr << "debugv ";    \
    for (auto i : x)      \
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
    ll n, m;
    cin >> n;
    vi arr(n, 0);
    FORN(i, n)
        cin >> arr[i];
    std::sort(all(arr));
    ll sum = std::accumulate(all(arr), 0LL);
    cin >> m;
    FORN(i, m)
    {
        ll this_coupon;
        cin >> this_coupon;
        cout << (sum - arr[arr.size() - this_coupon]) << endl;
    }
    return 0;
}