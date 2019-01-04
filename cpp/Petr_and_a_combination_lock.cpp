// https://codeforces.com/contest/1097/problem/B

// NOT SURE ABOUT THE SOLUTION BUT STILL GOT ACCEPTED

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int isUnlockable(int n, vector<int> instructions)
{
    int sum = std::accumulate(all(instructions), 0);
    if (sum == 360)
        return true;
    int max_instruction = *max_element(all(instructions));
    if (sum - max_instruction == max_instruction)
        return true;
    for (int i = 0; i < 32768; i++)
    {
        int aero = 0;
        int binary = i;
        for (int j = 0; j < instructions.size(); j++)
        {
            if (binary % 2 == 0)
                aero += instructions[j];
            else
                aero -= instructions[j];
            binary /= 2;
        }
        if (aero == 0)
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> instructions(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> instructions[i];
    }
    cout << (isUnlockable(n, instructions) ? "YES" : "NO") << endl;
    return 0;
}