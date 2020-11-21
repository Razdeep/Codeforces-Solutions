#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()

using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string text;
        cin >> text;
        
        vector<string> ans;
        int cnt = 0;

        for (int i = 0; i < text.size(); ++i) {
            if (text[i] != '0') {
                cnt++;
                string tmp = "";
                tmp += text[i];
                for (int j = 0; j < text.size() - i - 1; ++j) {
                    tmp += "0";
                }
                ans.push_back(tmp);
            }
        }
        
        cout << ans.size() << endl;
        for (string it: ans) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}