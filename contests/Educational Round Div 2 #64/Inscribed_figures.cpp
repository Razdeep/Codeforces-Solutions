// https://codeforces.com/contest/1156/problem/A
/**
 * Trick: Whenever there is a square containing circle containing triangle,
 * one point would be co-inciding. Thus deduct one if such sequence occurs.
 * 
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
    int n;
    cin >> n;
    bool infinite = false;
    int prev_item = -1, this_item, answer = 0;
    vector<int> arr;
    while (n--)
    {
        cin >> this_item;
        arr.push_back(this_item);
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

    for (int i = 0; i + 2 < n; i++)
    {
        if (arr[i] == 3 && arr[i + 1] == 1 && arr[i + 2] == 2)
            answer--;
    }

    cout << (infinite ? "Infinite" : "Finite") << endl;
    if (!infinite)
        cout << answer << endl;
    return 0;
}