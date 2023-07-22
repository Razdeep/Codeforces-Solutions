
// https://codeforces.com/contest/1850/problem/E

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
 
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

ull computeArea(vector<ll>& pictures, ll frame_width, ll total_cardboard_area) {
    ull res = 0ll;
    for (int picture_side: pictures) {
        ull side = picture_side + (2ll * frame_width);
        res += side * side;
        if (res > total_cardboard_area) {
            return numeric_limits<ull>::max();
        }
    }
    return res;
}
 
void solve() {
    
    ll no_of_pictures, total_cardboard_area;
    cin >> no_of_pictures >> total_cardboard_area;

    vector<ll> pictures(no_of_pictures);

    for (int i = 0; i < no_of_pictures; ++i) {
        cin >> pictures[i];
    }

    ll low = 1, high = static_cast<ll>(1e9);

    while (high - low > 1ll) {
        ll mid = (high + low) / 2ll;
        
        ull area_for_candidate = computeArea(pictures, mid, total_cardboard_area);

        if (area_for_candidate > total_cardboard_area) {
            high = mid;
        } else {
            low = mid;
        }
    }

    cout << low << endl;
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
 
    while (tc--) {
        solve();
    }
 
    return 0;
}

