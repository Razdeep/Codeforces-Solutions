// https://codeforces.com/contest/1152/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
ll no_of_bits(ll n)
{
    int count = 0;
    while (n >> count)
    {
        count++;
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    vector<int> answer;
    int nob = no_of_bits(x);
    for (int i = 0; i + 1 < nob; i++)
    {
        int prev_bit = (x >> i) & 1;
        int next_bit = (x >> (i + 1)) & 1;
        if (prev_bit != next_bit)
            answer.push_back(i + 1);
    }
    cout << answer.size() << endl;
    if (answer.size())
    {
        for (int i : answer)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}