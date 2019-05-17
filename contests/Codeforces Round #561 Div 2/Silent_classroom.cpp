// https://codeforces.com/contest/1166/problem/0
/**
 * Lesson:
 * Never use vec.resize(s, 0) to reset frequencies to zero
 */
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll i, n;
    cin >> n;
    vector<string> studentList(n);
    FORN(i, n)
    {
        cin >> studentList[i];
    }
    sort(all(studentList));
    vector<char> section[2];
    int cur_section = 0;
    // Separation
    FORN(i, n)
    {
        section[cur_section].push_back(studentList[i][0]);
        cur_section ^= 1;
    }
    ll total_chatty_pairs = 0LL;
    vector<int> freq(26, 0);

    FORN(i, section[0].size())
        freq[section[0][i] - 'a']++;
    FORN(i, 26)
        total_chatty_pairs += (freq[i] * (freq[i] - 1)) / 2;
    
    fill(all(freq), 0);
    
    FORN(i, section[1].size())
        freq[section[1][i] - 'a']++;
    FORN(i, 26)
        total_chatty_pairs += (freq[i] * (freq[i] - 1)) / 2;
    
    cout << total_chatty_pairs << endl;
    return 0;
}