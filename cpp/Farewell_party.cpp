// https://codeforces.com/contest/1081/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int no_of_invitees;
    cin>>no_of_invitees;
    int this_diff_hats;
    vector<int> possible_solution;
    int current_hat=1;
    for(int i=0;i<no_of_invitees;i++)
    {
        cin>>this_diff_hats;
        int this_same_hats=no_of_invitees-this_diff_hats;
        for(int j=0;j<this_same_hats;j++)
        {
            possible_solution.push_back(current_hat);
        }
        current_hat++;
    }
    if(possible_solution.size()!=no_of_invitees)
    {
        cout<<"Impossible"<<endl;
    }
    else{
        cout<<"Possible"<<endl;
        for(int i=0;i<possible_solution.size();i++)
        {
            cout<<possible_solution[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}