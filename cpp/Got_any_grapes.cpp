// https://codeforces.com/contest/1114/problem/0
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int hunger_andrew, hunger_dmitry, hunger_michal;
    cin >> hunger_andrew >> hunger_dmitry >> hunger_michal;
    int green_grapes, purple_grapes, black_grapes;
    cin >> green_grapes >> purple_grapes >> black_grapes;
    if(hunger_andrew == 0 && hunger_dmitry == 0 && hunger_michal == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    if (green_grapes < hunger_andrew || purple_grapes + green_grapes < hunger_dmitry)
    {
        // cout<<"DEBUG";
        cout << "NO" << endl;
        return 0;
    }
    if (hunger_andrew <= green_grapes)
    {
        green_grapes -= hunger_andrew;
        hunger_andrew = 0;
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    int prev_green_grapes = green_grapes;
    green_grapes -= (hunger_dmitry < green_grapes) ? hunger_dmitry : green_grapes;
    hunger_dmitry -= (prev_green_grapes - green_grapes);
    if (hunger_dmitry > 0)
    {
        int prev_purple_grapes = purple_grapes;
        purple_grapes -= (hunger_dmitry < purple_grapes) ? hunger_dmitry : purple_grapes;
        hunger_dmitry -= (prev_purple_grapes - purple_grapes);
    }
    if (green_grapes + black_grapes + purple_grapes >= hunger_michal && hunger_andrew < 1 && hunger_dmitry < 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}