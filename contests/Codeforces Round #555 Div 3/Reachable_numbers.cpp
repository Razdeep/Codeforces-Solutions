// https://codeforces.com/contest/1157/problem/A
/**
 * Explanation:
 * From every integer, 1 2 3 4 5 6 7 8 9 can be reached.
 * The minimum Reachable number for every int(except 0) is 9.
 * So we have to worry about only the unique number greater than 9.
 * 
 */
#include <bits/stdc++.h>
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;
int operate(int n)
{
    n += 1;
    while (n % 10 == 0)
    {
        n /= 10;
    }
    return n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    set<int> answer_set;
    answer_set.insert(n);
    for (int i = 1; i <= 9; i++)
        answer_set.insert(i);

    while (n > 9)
    {
        n = operate(n);
        answer_set.insert(n);
        // debug(n);
    }

    cout << answer_set.size() << endl;
    return 0;
}