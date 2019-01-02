// https://codeforces.com/contest/1088/problem/B
// NOT SOLVED
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int this_number;
        cin>>this_number;
        arr.push_back(this_number);
    }
    sort(arr.begin(),arr.end());
    
    // Finding the unique vector
    vector<int> new_arr;
    for(int i=0;i+1<arr.size();i++)
    {
        if(arr[i]!=arr[i+1])
        {
            new_arr.push_back(arr[i]);
        }
    }

    int deducted_so_far=0;
    int max_count_unique=new_arr.size();
    for(int i=0;i<k;i++)
    {
        if(i>=max_count_unique)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int answer= (new_arr[i]-deducted_so_far);
            cout<<answer<<endl;
            deducted_so_far+=new_arr[i];
        }
    }
    return 0;
}