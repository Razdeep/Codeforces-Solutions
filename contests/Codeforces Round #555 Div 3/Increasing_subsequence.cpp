// https://codeforces.com/contest/1157/problem/C1
#include <bits/stdc++.h>
#define debug(x) cerr << "x -> " << x << endl;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    string answer_list;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int front = 0, rear = n - 1;
    int prev = INT_MIN;
    while (front <= rear)
    {
        if (arr[front] > prev && arr[rear] > prev)
        {
            if (arr[front] < arr[rear])
            {
                answer_list.push_back('L');
                prev = arr[front];
                // debug(prev);
                front++;
            }
            else
            {
                answer_list.push_back('R');
                prev = arr[rear];
                // debug(prev);
                rear--;
            }
        }
        else if (arr[front] > prev)
        {
            answer_list.push_back('L');
            prev = arr[front++];
            // debug(prev);
        }
        else if (arr[rear] > prev)
        {
            answer_list.push_back('R');
            prev = arr[rear--];
            // debug(prev);
        }
        else
            break;
    }
    cout << answer_list.size() << endl;
    for (auto i : answer_list)
        cout << i;
    cout << endl;
    return 0;
}