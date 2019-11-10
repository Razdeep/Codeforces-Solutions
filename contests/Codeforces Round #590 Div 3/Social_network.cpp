#include <iostream>
#include <queue>
#include <stack>
#include <set>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	queue<int> q;
	set<int> myset;
	for (int i = 0; i < n; ++i)
	{
		int msg;
		cin >> msg;
		if (myset.find(msg) != myset.end())
			continue;
		else if (q.size() < k)
		{
			q.push(msg);
			myset.insert(msg);
		}
		else
		{
			myset.erase(myset.find(q.front()));
			q.pop();
			q.push(msg);
			myset.insert(msg);
		}
	}
	cout << q.size() << endl;
	stack<int> st;
	while(!q.empty())
	{
		st.push(q.front());
		q.pop();
	}
	while(!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
	return 0;
}
