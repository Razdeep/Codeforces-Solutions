// https://codeforces.com/contest/1173/problem/A
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define _                             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//#define ONLINE_JUDGE
using namespace std;
typedef long long ll;
void solve()
{
    ll upvotes, downvotes, uncertain_votes;
    cin >> upvotes >> downvotes >> uncertain_votes;
    if (upvotes + uncertain_votes > downvotes && downvotes + uncertain_votes > upvotes)
        cout << "?" << endl;
    else if (upvotes > downvotes + uncertain_votes)
        cout << "+" << endl;
    else if (downvotes > upvotes + uncertain_votes)
        cout << "-" << endl;
    else
        cout << 0 << endl;
}
int main(int argc, const char **argv)
{
    _;
    ll testcases = 1LL;
    //cin >> testcases;

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    while (testcases--)
    {
        solve();
    }
    return 0;
}