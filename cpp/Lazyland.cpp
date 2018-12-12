// https://codeforces.com/problemset/problem/1089/L
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Person{
    int work_preference;
    int convincing_time;
    int operator<(struct Person& that)
    {
        if(this->work_preference<that.work_preference)
        {
            return true;
        }
        else if(this->work_preference==that.work_preference)
        {
            if(this->convincing_time<that.convincing_time)
            {
                return true;
            }
            return false;
        }
        return false;
    }

    // for debugging only
    // void print(){
    //     cout<<work_preference<<" "<<convincing_time<<endl;
    // }
};
// Helper method to sort by convincing time
int accordingToConvincingTime(struct Person& first,struct Person& second)
{
    if(first.convincing_time<second.convincing_time)
        return true;
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    // if(n==k)
    // {
    //     cout<<"0"<<endl;
    //     return 0;
    // }
    vector<Person> personList;
    for(int i=0;i<n;i++)
    {
        int this_work_preference;
        cin>>this_work_preference;
        struct Person this_person;
        this_person.work_preference=this_work_preference;
        personList.push_back(this_person);
    }
    for(int i=0;i<n;i++)
    {
        int this_convincing_time;
        cin>>this_convincing_time;
        personList[i].convincing_time=this_convincing_time;
    }
    sort(personList.begin(),personList.end());
    // DEBUG PERSONLIST
    // cout<<"DEBUG PERSONLIST"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     personList[i].print();
    // }

    // Removing one of each work preference
    int distinct_elements=0;
    vector<Person> newPersonList;
    for(int i=0;i<personList.size();i++)
    {
        if(personList[i].work_preference==personList[i+1].work_preference)
            newPersonList.push_back(personList[i]);
        else
            distinct_elements++;
    }

    // DEBUG NEWPERSONLIST
    // cout<<"DEBUG NEWPERSONLIST"<<endl;
    // for(int i=0;i<newPersonList.size();i++)
    // {
    //     newPersonList[i].print();
    // }

    // SORTING NEWPERSONLIST ACCORDING TO THE CONVINCING TIME
    sort(newPersonList.begin(),newPersonList.end(),accordingToConvincingTime);

    // DEBUG NEWPERSONLIST
    // cout<<"DEBUG NEWPERSONLIST"<<endl;
    // for(int i=0;i<newPersonList.size();i++)
    // {
    //     newPersonList[i].print();
    // }

    ll total_convincing_time=0;
    for(int i=0;i<k-distinct_elements;i++)
        total_convincing_time+=newPersonList[i].convincing_time;
    
    cout<<total_convincing_time<<endl;
    return 0;
}