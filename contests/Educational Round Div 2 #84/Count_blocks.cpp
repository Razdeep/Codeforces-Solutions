// https://codeforces.com/contest/1327/problem/E
// TO BE REVISED
#include <iostream>
using namespace std;
typedef long long ll;
const int MOD = 998244353;

ll powerMod(const ll a, const ll b, const ll mod) {
    ll res = 1;

    if (b <= 0) {
        return 1;
    }

    ll temp = powerMod(a, b / 2, mod) % mod;

    if (b & 1)
        return (((temp * temp) % mod) * a) % mod;
    else
        return (temp * temp) % mod;
}

int main() {

    ll text_len;
    cin >> text_len;

    for (ll block_len = 1; block_len <= text_len; ++block_len) {
        
        if (block_len == text_len) {
            cout << 10 << endl;
            return 0;
        }

        ll ans = 0LL;
        ll no_of_spots, no_of_possible_values;
        ll no_of_neighbouring_possible_values, remaining;


        // CALCULATION FOR THE BLOCKS PRESENT AT BOTH THE ENDS
        no_of_spots                         = 2;   // Beginning and end
        no_of_possible_values               = 10;  // 0 to 9
        no_of_neighbouring_possible_values  = 9;   // Neighbours can't have same digit, so (10 - 1)
        remaining                           = powerMod(10, text_len - block_len - 1, MOD);

        ans = (no_of_spots * no_of_possible_values * no_of_neighbouring_possible_values * remaining) % MOD;


        // CALCULATION FOR THE BLOCKS EXCEPT THE ENDS (YOU CAN SAY MIDDLE)
        no_of_spots                         = text_len - block_len - 1;
        no_of_possible_values               = 10;
        no_of_neighbouring_possible_values  = 9 * 9; // Considering both neighbours
        remaining                           = powerMod(10, text_len - block_len - 2, MOD);

        ans += (no_of_spots * no_of_possible_values * no_of_neighbouring_possible_values * remaining) % MOD;
        ans %= MOD;

        cout << ans << " ";
    }

    return 0;
}