// https://codeforces.com/contest/1059/problem/A

#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;
int main()
{
    int count = 0;
    int no_of_customers, total_work_duration, break_duration;
    cin >> no_of_customers >> total_work_duration >> break_duration;
    vector<int> customerEntryTime(no_of_customers, -1), customerDuration(no_of_customers, -1);
    for (int i = 0; i < no_of_customers; i++)
        cin >> customerEntryTime[i] >> customerDuration[i];
    int freed_at = 0;
    for (int i = 0; i < no_of_customers; i++)
    {
        int idle_time = customerEntryTime[i] - freed_at;
        count += idle_time / break_duration;
        freed_at = customerEntryTime[i] + customerDuration[i];
    }
    int last_idle_time = total_work_duration - freed_at;
    count += last_idle_time / break_duration;
    cout << count << endl;
    return 0;
}