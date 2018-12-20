/**
 * @author: razdeep
 * https://codeforces.com/contest/1081/problem/B
 * 
**/
// 
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
void debug(vector<int> &anything);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int no_of_invitees;
    cin >> no_of_invitees;
    vector<int> diff_hat_replies(no_of_invitees,0);
    vector<int> same_hat_replies(no_of_invitees,0);
    int current_hat = 1;
    for (int i = 0; i < no_of_invitees; i++)
    {
        cin >> diff_hat_replies[i];
        same_hat_replies[i] = no_of_invitees - diff_hat_replies[i];
    }
    sort(all(same_hat_replies));
    auto last_ptr = unique(all(same_hat_replies));
    // Removing garbages
    same_hat_replies.resize(std::distance(same_hat_replies.begin(), last_ptr));
    reverse(all(same_hat_replies));
    vector<int> result;
    int this_hat=1;
    for(int i=0;i<same_hat_replies.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            result.push_back(this_hat);
        }
        this_hat++;
    }
    // Safety check
    int remaining=no_of_invitees-same_hat_replies.size();
    for(int i=0;i<remaining;i++)
    {
        result.push_back(this_hat);
    }
    debug(result);
    return 0;
}
void debug(vector<int> &anything)
{
    cout << "DEBUGGING...\n";
    for (int i = 0; i < anything.size(); i++)
    {
        cout << anything[i] << endl;
    }
}