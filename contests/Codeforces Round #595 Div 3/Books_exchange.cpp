// https://codeforces.com/contest/1249/problem/B1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
        }
        set<int> myset;
        vector<int> ans(n + 1, 0), done(n + 1, false);
        for (int i = 1; i <= n; ++i)
        {
            if (!done[i])
            {
                stack<int> st;
                int start = i;
                done[start] = true;
                st.push(start);
                int next = arr[start];
                int cnt = 1;
                while(next != start)
                {
                    st.push(next);
                    done[next] = true;
                    next = arr[next];
                    cnt++;
                }
                while(!st.empty())
                {
                    ans[st.top()] = cnt;
                    st.pop();
                }
            }
        }
        for (int i = 1; i <= n; ++i)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}