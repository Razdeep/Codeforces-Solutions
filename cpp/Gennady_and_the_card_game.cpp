// https://codeforces.com/contest/1097/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string card_on_table;
    cin >> card_on_table;
    for (int i = 0; i < 5; i++)
    {
        string this_card;
        cin >> this_card;
        if (card_on_table[0] == this_card[0] || card_on_table[1] == this_card[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}