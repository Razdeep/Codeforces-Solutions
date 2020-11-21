#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
#define trace(x) //cout << #x << ": " << x << endl;
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc = 1;
    cin >> tc;

    while (tc--) {

    	vector<int> arr(4);
        int cnt_odd_1 = 0;

        for (int i = 0; i < 4; ++i) {
            cin >> arr[i];
            cnt_odd_1 += (arr[i] & 1);
        }
        
        sort(arr.begin(), arr.begin() + 3);

        int cnt_odd_2 = 0;

        if (arr[0] > 0) {
            arr[0] -= 1;
            arr[1] -= 1;
            arr[2] -= 1;
            arr[3] += 3;
            for (int i = 0; i < 4; ++i) {
                cnt_odd_2 += (arr[i] & 1);
            }
        } else {
            cnt_odd_2 = int(1e9);
        }
        
        cout << (cnt_odd_1 <= 1 || cnt_odd_2 <= 1 ? "Yes" : "No") << endl;
    }
    return 0;
}