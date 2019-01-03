// https://codeforces.com/problemset/problem/1090/A
/**
 * HINT:
 * Answer is sum of all the differences between maximum salary of conglomerate
 * and maximum salary of each company.
 * 
 * Conglomerate means "a thing consisting of a number of different and
 *                    distinct parts or items that are grouped together."
 */
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

struct Company
{
    ll number_of_employees;
    ll max_salary;

    Company(ll number_of_employees, ll max_salary)
    {
        this->number_of_employees = number_of_employees;
        this->max_salary = max_salary;
    }
};
ll sortingMethod(const Company &a, const Company &b)
{
    return a.max_salary < b.max_salary;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll number_of_companies;
    cin >> number_of_companies;
    vector<Company> company_list;

    while (number_of_companies--)
    {
        ll max_salary = INT_MIN;
        ll number_of_employees;
        cin >> number_of_employees;
        for (ll i = 0; i < number_of_employees; i++)
        {
            ll this_salary;
            cin >> this_salary;
            max_salary = max(max_salary, this_salary);
        }
        Company this_company(number_of_employees, max_salary);
        company_list.push_back(this_company);
    }

    sort(all(company_list), sortingMethod);

    // Last company in the last has the max_salary_of_conglomerate
    ll max_salary_of_conglomerate = company_list[company_list.size() - 1].max_salary;
    ll answer = 0;
    for (ll i = 0; i < company_list.size() - 1; i++)
    {
        ll this_company_increase_salary = max_salary_of_conglomerate - company_list[i].max_salary;
        answer += (this_company_increase_salary * company_list[i].number_of_employees);
    }
    cout << answer << endl;
    return 0;
}