// https://codeforces.com/contest/1154/problem/C
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int fish_food, rabit_stew, chicken_stakes;
    cin >> fish_food >> rabit_stew >> chicken_stakes;
    int complete_weeks = min(fish_food / 3, min(rabit_stew / 2, chicken_stakes / 2));
    fish_food -= 3 * complete_weeks;
    rabit_stew -= 2 * complete_weeks;
    chicken_stakes -= 2 * complete_weeks;
    int routine[] = {0, 1, 2, 0, 2, 1, 0};
    vector<int> food(3);
    int answer = complete_weeks * 7;
    for (int i = 0; i < 7; i++)
    {
        food[0] = fish_food;
        food[1] = rabit_stew;
        food[2] = chicken_stakes;
        int cur = i;
        int fed = 0;
        while (food[routine[cur % 7]])
        {
            food[routine[cur % 7]]--;
            fed++;
            answer = max(answer, 7 * complete_weeks + fed);
            cur++;
        }
    }
    cout << answer << endl;
    return 0;
}