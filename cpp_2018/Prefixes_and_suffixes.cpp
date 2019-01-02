// https://codeforces.com/contest/1092/problem/C
// NOT SOLVED
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int length_of_string;
    cin >> length_of_string;
    int no_of_hints = 2 * (length_of_string - 1);
    vector<string> hints(no_of_hints);
    string max_suffix;
    for (int i = 0; i < no_of_hints; i++)
    {
        cin >> hints[i];
        max_suffix = ((hints[i].size() > max_suffix.size()) ? hints[i] : max_suffix);
    }
    cout << endl;
    return 0;
}