// https://codeforces.com/contest/1105/problem/A
// NOT JUDGED
// HAVE TO SUBMIT TOMORROW

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll number_of_sticks;
    cin >> number_of_sticks;
    vector<ll> stick_vector(number_of_sticks, 0);
    for (ll i = 0; i < number_of_sticks; i++)
        cin >> stick_vector[i];
    ll average_stick_length = std::accumulate(all(stick_vector), 0) / number_of_sticks;
    ll cost = 0;
    for (ll i = 0; i < number_of_sticks; i++)
    {
        if (stick_vector[i] < average_stick_length - 1)
        {
            cost += abs(stick_vector[i] - (average_stick_length - 1));
        }
        else if (stick_vector[i] > average_stick_length + 1)
        {
            cost += abs(stick_vector[i] - (average_stick_length + 1));
        }
    }
    cout << average_stick_length << " " << cost << endl;
    return 0;
}