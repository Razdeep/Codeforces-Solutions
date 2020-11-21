#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
typedef long long ll;
#define int ll
using namespace std;

signed main() {
    int tc = 1;
    cin >> tc;

    while (tc--) {
        int remain_sleep_duration, alarm_rings_in, reset_for, pre_sleep;
        cin >> remain_sleep_duration >> alarm_rings_in >> reset_for >> pre_sleep;

        if (alarm_rings_in >= remain_sleep_duration) {
            cout << alarm_rings_in << endl;
            continue;
        }

        if (pre_sleep >= reset_for) {
            cout << -1 << endl;
            continue;
        }
        
        int ans = alarm_rings_in;
        remain_sleep_duration -= alarm_rings_in;
        int micro_sleep = reset_for - pre_sleep;
        int no_of_micro_sleeps = (remain_sleep_duration % micro_sleep ? remain_sleep_duration / micro_sleep + 1 : remain_sleep_duration / micro_sleep);
        ans += (reset_for * no_of_micro_sleeps); 

        cout << ans << endl;
    }

    return 0;
}