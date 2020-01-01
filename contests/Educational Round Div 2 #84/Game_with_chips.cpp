// https://codeforces.com/contest/1327/problem/C
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int no_of_rows, no_of_cols, no_of_chips;
    cin >> no_of_rows >> no_of_cols >> no_of_chips;

    vector<pair<int, int> > sources(no_of_chips);
    vector<pair<int, int> > targets(no_of_chips);

    for (int i = 0; i < no_of_chips; ++i) {
          pair<int, int> point;
          cin >> point.first >> point.second;
          sources.push_back(point);  
    }

    for (int i = 0; i < no_of_chips; ++i) {
          pair<int, int> point;
          cin >> point.first >> point.second;
          targets.push_back(point);  
    }

    // Here's the trick, the solution is only dependent on n and m
    // We will traverse the whole surface after collecting all points at (1, 1)

    if (no_of_rows <= 1 && no_of_cols <= 1) {
        cout << 0 << endl;
        return 0;
    }

    string ans = "";

    for (int i = 0; i < no_of_rows - 1; ++i)
        ans += "U";
    
    for (int i = 0; i < no_of_cols - 1; ++i)
        ans += "L";

    for (int i = 0; i < no_of_rows; ++i) {

        if (i != 0)
            ans += "D";

        for (int j = 0; j < no_of_cols - 1; ++j)
            ans += (i & 1 ? "L" : "R");
            
    }

    cout << int(ans.size()) << endl;
    cout << ans << endl;

    return 0;
}