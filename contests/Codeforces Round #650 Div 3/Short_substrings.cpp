// https://codeforces.com/contest/1367/problem/A
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
 
int main() {
    int tc;
    cin >> tc;
 
    while (tc--) {
        string s;
        cin >> s;

        int n = int(s.size());
        string ans = "";

        for (int i = 0; i < n; i += 2) {
            ans += s[i];
        }

        cout << ans;
        
        if (n % 2 == 0) {
            cout << s[n - 1];
        }

        cout << endl;
    }
    return 0;
}