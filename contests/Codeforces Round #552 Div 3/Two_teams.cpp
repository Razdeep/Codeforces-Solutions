// https://codeforces.com/contest/1154/problem/E
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
struct Student
{
    int skill, index, chosen_by, index_in_sorted;
    // 0 for not chosen, 1 for Team A, 2 for Team B
};
bool sortingMethod(const Student &first, const Student &second)
{
    return first.skill > second.skill;
}
int main()
{
    int no_of_students, k; // k students shall be selected on both sides of max student
    cin >> no_of_students >> k;
    vector<Student> studentList(no_of_students);
    for (int i = 0; i < no_of_students; i++)
    {
        studentList[i].index = i;
        cin >> studentList[i].skill;
        studentList[i].chosen_by = 0;
    }
    vector<Student> priorityStudentList(all(studentList));
    sort(all(priorityStudentList), sortingMethod);
    for (int i = 0; i < no_of_students; i++)
    {
        priorityStudentList[i].index_in_sorted = i;
        studentList[priorityStudentList[i].index].index_in_sorted = i;
    }
    int this_turn = 1;
    for (int this_student = 0; this_student < no_of_students; this_student++)
    {
        while (priorityStudentList[this_student].chosen_by != 0 && this_student < no_of_students)
            this_student++;
        if (this_student == no_of_students)
            break;
        int this_index = priorityStudentList[this_student].index;
        studentList[this_index].chosen_by = this_turn;
        int this_k = 0;
        for (int i = this_index + 1; this_k < k && i < no_of_students; i++)
        {
            if (studentList[i].chosen_by == 0)
            {
                studentList[i].chosen_by = this_turn;
                priorityStudentList[studentList[i].index_in_sorted].chosen_by = this_turn;
                this_k++;
            }
        }
        this_k = 0;
        for (int i = this_index - 1; this_k < k && i >= 0; i--)
        {
            if (studentList[i].chosen_by == 0)
            {
                studentList[i].chosen_by = this_turn;
                priorityStudentList[studentList[i].index_in_sorted].chosen_by = this_turn;
                this_k++;
            }
        }
        if (this_turn == 1)
            this_turn = 2;
        else
            this_turn = 1;
    }
    for (auto this_student : studentList)
    {
        cout << this_student.chosen_by;
    }
    cout << endl;
    return 0;
}