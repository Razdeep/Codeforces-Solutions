// https://codeforces.com/contest/1090/problem/M
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int number_of_houses,variety_of_houses;
    cin>>number_of_houses>>variety_of_houses;
    if(number_of_houses==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int max_streak=INT_MIN,this_streak=1;
    int this_house,prev_house;
    cin>>this_house;
    for(int i=1;i<number_of_houses;i++)
    {
        prev_house=this_house;
        cin>>this_house;
        if(this_house==prev_house)
        this_streak=1;
        else
        this_streak++;
        max_streak=(this_streak>max_streak)?this_streak:max_streak;
    }
    cout<<max_streak<<endl;
    return 0;
}