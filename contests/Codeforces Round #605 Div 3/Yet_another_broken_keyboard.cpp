// https://codeforces.com/contest/1272/problem/C

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <set>
#define all(v) v.begin(), v.end()
using namespace std;

int main()
{
    int text_len, no_of_working_keys;
    cin >> text_len >> no_of_working_keys;
    string text;
    cin >> text;
    set<char> working_keys;
    for (int i = 0; i < no_of_working_keys; ++i)
    {
        char c;
        cin >> c;
        working_keys.insert(c);
    }
    string longest_text;
    for (int i = 0; i < text_len; ++i)
    {
        if (working_keys.find(text[i]) != working_keys.end()) // found
            longest_text += text[i];
    }
    int longest_len = longest_text.size();
    cout << (longest_len * (longest_len + 1)) / 2 << endl;
    return 0;
}
