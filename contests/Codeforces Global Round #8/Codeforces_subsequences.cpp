// https://codeforces.com/contest/1368/problem/B
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
    ll target_subsequences; // k
    cin >> target_subsequences;

    ll no_of_subsequences = 1;
    string text = "codeforces";
    const int text_size = int(text.size());
    vector<ll> frequencies(text_size, 1);

    ll idx = 0;

    while (no_of_subsequences < target_subsequences) {
        no_of_subsequences = no_of_subsequences * (frequencies[idx] + 1) / frequencies[idx];
        frequencies[idx]++;
        idx++;
        idx %= text_size;
    }

    for (int i = 0; i < text_size; ++i) {
        for (int j = 0; j < frequencies[i]; ++j) {
            cout << text[i];
        }
    }
    cout << endl;

    return 0;
}