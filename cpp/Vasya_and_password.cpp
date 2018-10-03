// Vasya and password
// Problem 1051A
#include<bits/stdc++.h>
using namespace std;
bool valid(string s){
    int noUpper,noLower,noInteger;
    noUpper=noLower=noInteger=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        noUpper++;
        else if(s[i]>='a' && s[i]<='z')
        noLower++;
        else if(s[i]>='0' && s[i]<='9')
        noInteger++;
        else
        cout<<"Dhur! Character out of syllabus ;)"<<endl;
    }
    return (noUpper && noLower && noInteger);
}

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        cin>>s;

        //counting
        int noUpper,noLower,noInteger;
        noUpper=noLower=noInteger=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            noUpper++;
            else if(s[i]>='a' && s[i]<='z')
            noLower++;
            else if(s[i]>='0' && s[i]<='9')
            noInteger++;
            else
            cout<<"Dhur! Character out of syllabus ;)"<<endl;
        }
        if(valid(s))
        cout<<s<<endl;
        //If only one of them is present
        else if(noUpper>0 && noLower==0 && noInteger==0)
        {
            s[0]='0';
            s[1]='a';
            cout<<s<<endl;
        }
        else if(noLower>0 && noInteger==0 && noUpper==0)
        {
            s[0]='A';
            s[1]='0';
            cout<<s<<endl;
        }
        else if(noInteger>0 && noUpper==0 && noLower==0)
        {
            s[0]='A';
            s[1]='a';
            cout<<s<<endl;
        }
        // If one of them is absent
        else{
            for(int i=0;i<s.size();i++)
            {
                char temp=s[i];
                s[i]='A';
                if(valid(s)) {cout<<s<<endl;break;}
                s[i]='a';
                if(valid(s)) {cout<<s<<endl;break;}
                s[i]='0';
                if(valid(s)) {cout<<s<<endl;break;}
                s[i]=temp;
            }
        }
    }
    return 0;
}
