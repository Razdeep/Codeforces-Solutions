// https://codeforces.com/contest/1335/problem/A
#include <iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    
    while (tc--) {
        int no_of_candies;
        cin >> no_of_candies;

        cout << (no_of_candies - 1) / 2 << endl;
    }
}