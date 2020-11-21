// https://codeforces.com/contest/1334/problem/C
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
typedef long long ll;
constexpr ll MAX = 1e15;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc;
    cin >> tc;

    while (tc--) {

        int n;
        cin >> n;
        vector<pair<ll, ll> > circle(n);

        ll min_monster = MAX;
        for (int i = 0; i < n; ++i) {
            cin >> circle[i].first >> circle[i].second;
            
        }

        ll ans = 0;
        
        ans += max(0LL, circle[0].first - circle[n - 1].second);
        circle[0].first = min(circle[0].first, circle[n - 1].second);

        for (int i = 1; i < n; ++i) {
            if (circle[i].first > circle[i - 1].second) {
                ans += circle[i].first - circle[i - 1].second;
                circle[i].first = circle[i - 1].second;
            }
        }
        
        for (int i = 0; i < n; ++i) {
            if (circle[i].first > 0)
                min_monster = std::min(min_monster, circle[i].first);
        }

        ans += min_monster;
        if (min_monster == MAX) {
            cout << 0 << endl;
            continue;
        }
        cout << ans << endl;
    }
}