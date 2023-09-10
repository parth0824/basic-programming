#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "hello";

    vector<int> ans;

    stack<int> stack;
    for (int i = 0; i < v.size(); i++)
    {
        while (!(stack.empty()) && (v[i] > v[stack.top()]))
        {
            int x = stack.top();
            ans.push_back = v[i];
            stack.pop();
        }
        stack.push(i);
    }
    cout << "hello";
    cout << endl;
    // while (stack.empty())
    // {
    //     int x = stack.top();
    //     ans[x] = -1;
    //     stack.pop();
    // }
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }

    return 0;
}