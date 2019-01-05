// https://codeforces.com/contest/1099/problem/A
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int weight, height;
    cin >> weight >> height;
    int weight_stone_1, height_stone_1;
    cin >> weight_stone_1 >> height_stone_1;
    int weight_stone_2, height_stone_2;
    cin >> weight_stone_2 >> height_stone_2;

    for (int i = height; i >= 1; i--)
    {
        weight += i;
        if (i == height_stone_1)
        {
            weight -= weight_stone_1;
        }
        if (i == height_stone_2)
        {
            weight -= weight_stone_2;
        }
        weight = (weight < 0) ? 0 : weight;
    }
    int answer = weight < 0 ? 0 : weight;
    cout << answer << endl;
    return 0;
}