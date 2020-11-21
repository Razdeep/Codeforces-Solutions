// https://codeforces.com/contest/1369/problem/A
#include <iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    
    while (tc--) {
        int n;
        cin >> n;
        
        cout << (n % 4 ? "NO" : "YES") << endl;
    }
    return 0;
}
