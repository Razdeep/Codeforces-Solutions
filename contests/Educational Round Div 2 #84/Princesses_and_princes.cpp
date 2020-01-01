// https://codeforces.com/contest/1327/problem/B
#include <iostream>
#include <vector>
#include <utility>
#define SEG_CHECK cerr << "Rajdeep" << endl;
using namespace std;

int main() {
    
    int tc;
    cin >> tc;

    while (tc--) {
        int no_of_daughters;
        cin >> no_of_daughters;

        vector<vector<int> > preferences(no_of_daughters, vector<int>());

        for (int i = 0; i < no_of_daughters; ++i) {
            int this_daughter_likes;
            cin >> this_daughter_likes;

            while (this_daughter_likes--) {
                int tmp;
                cin >> tmp;
                preferences[i].push_back(tmp);
            }
        }

        vector<bool> committed_prince(no_of_daughters + 1, false);
        vector<bool> committed_princess(no_of_daughters + 1, false);

        for (int i = 0; i < no_of_daughters; ++i) {
            for (int j = 0; j < int(preferences[i].size()); ++j) {
                if (!committed_prince[preferences[i][j]]) {
                    committed_prince[preferences[i][j]] = true;
                    committed_princess[i + 1] = true;
                    break;
                }
            }
        }

        pair<int, int> res;
        bool ok = true;

        for (int i = 1; i <= no_of_daughters; ++i) {
            if (!committed_princess[i]) {
                for (int j = 1; j <= no_of_daughters; ++j) {
                    if (!committed_prince[j]) {
                        ok = false;
                        res.first = i;
                        res.second = j;
                        committed_prince[i] = committed_princess[j] = true;
                        break;
                    }
                }
            }
            if (!ok) break;
        }

        if (ok) {
            cout << "OPTIMAL" << endl;
        } else {
            cout << "IMPROVE" << endl;
            cout << res.first << " " << res.second << endl;
        }
    }
    return 0;
}