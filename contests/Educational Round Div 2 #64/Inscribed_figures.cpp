// https://codeforces.com/contest/1156/problem/A
// NOT SOLVED
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
    int n;
    cin >> n;
    bool infinite = false;
    int prev_item = -1, this_item, answer = 0;
    while (n--)
    {
        cin >> this_item;
        if ((this_item == 2 && prev_item == 3) || this_item == 3 && prev_item == 2)
        {
            infinite = true;
            break;
        }
        else if (prev_item == 1)
            answer += (this_item == 2 ? 3 : 4);
        else if (prev_item == 2)
            answer += 3;
        else if (prev_item == 3)
            answer += 4;
        prev_item = this_item;
    }
    cout << (infinite ? "Infinite" : "Finite") << endl;
    if (!infinite)
        cout << answer << endl;
    return 0;
}