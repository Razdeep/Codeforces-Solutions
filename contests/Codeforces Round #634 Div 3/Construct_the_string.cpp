// https://codeforces.com/contest/1335/problem/B
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int string_length, substring_length, distinct_letters_in_substring;
        cin >> string_length >> substring_length >> distinct_letters_in_substring;

        if (substring_length == distinct_letters_in_substring) {
            for (int i = 0; i < string_length; ++i) {
                cout << char((i % 26) + 'a');
            }
            cout << endl;
            continue;
        }
        
        string text;
        for (int i = 0; i < string_length; ) {
            int cur_substring = substring_length;
            int cur_distinct = distinct_letters_in_substring - 1;
            char cur_letter = 'a';
            while (cur_substring--) {
                text += (cur_distinct > 0 ? cur_letter : 'z');
                cur_distinct--;
                cur_letter++;
                ++i;
                if (i >= string_length) {
                    break;
                }
            }
            if (i >= string_length) {
                break;
            }
        }
        
        cout << text << endl;
    }
    return 0;
}