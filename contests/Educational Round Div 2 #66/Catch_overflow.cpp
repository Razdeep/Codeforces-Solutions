// https://codeforces.com/contest/1175/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define FORN(i, n) for (__typeof(i) i = 0; i < n; i++)
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
typedef long long ll;
ll instructions;
ll answer = 0;
ll current_power = 0;
void fetchInstruction()
{
    string text;
    cin >> text;
    ll n = -1;
    if (text == "end")
        return;
    else if (text == "for")
    {
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            fetchInstruction();
            instructions--;
        }
    }
    else
    {
        answer++;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> instructions;

    while (instructions--)
    {
        fetchInstruction();
    }
    cout << (answer >= 4294967296L ? "OVERFLOW!!!" : to_string(answer)) << endl;
    return 0;
}