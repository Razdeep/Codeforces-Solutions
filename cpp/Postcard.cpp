// https://codeforces.com/contest/1099/problem/C
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string message;
    cin >> message >> n;
    int count_question_marks = std::count(all(message), '?');
    int count_asterisks = std::count(all(message), '*');
    int length_without_marks = message.size() - count_question_marks - count_asterisks;
    if (n < length_without_marks - count_question_marks - count_asterisks)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    else if (n > length_without_marks && std::count(all(message), '*') == 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    if (n == length_without_marks)
    {
        for (int i = 0; i < message.size(); i++)
        {
            if (message[i] == '*' || message[i] == '?')
            {
                continue;
            }
            cout << message[i];
        }
        cout << endl;
    }
    else if (n < length_without_marks)
    {
        int difference = length_without_marks - n;
        string new_message;
        std::reverse(all(message));
        for (int i = 0; i < message.size(); i++)
        {
            if ((message[i] == '*' || message[i] == '?') && difference)
            {
                difference--;
                i++;
                continue;
            }
            else if (message[i] == '*' || message[i] == '?')
            {
                continue;
            }
            else
            {
                new_message.push_back(message[i]);
            }
        }
        std::reverse(all(new_message));
        cout << new_message << endl;
    }
    else
    {
        int done = false;
        int difference = n - length_without_marks;
        string new_message;
        for (int i = 0; i < message.size(); i++)
        {
            if (message[i] == '*' && !done)
            {
                for (int j = 0; j < difference; j++)
                {
                    new_message.push_back(message[i - 1]);
                }
                done = true;
                continue;
            }
            else if (message[i] == '?' || message[i] == '*')
                continue;
            new_message.push_back(message[i]);
        }
        cout << new_message << endl;
    }
    return 0;
}