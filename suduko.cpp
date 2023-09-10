#include <bits/stdc++.h>
using namespace std;
bool paindrome(string s)
{
    // return true;
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
bool ispalindrome(vector<string> &v)
{
    for (auto i : v)
    {
        if (!paindrome(i))
            return false;
    }
    return true;
}
void pp(string s, int indx, vector<string> help, vector<vector<string>> &ans)
{
    if (indx == s.size())
    {
        if (ispalindrome(help))
            ans.push_back(help);
        return;
    }
    for (int i = 1; i <= s.size(); i++)
    {
        if (i + indx > s.size())
            return;
        string sub = s.substr(indx, i);

        help.push_back(sub);
        pp(s, indx + sub.size(), help, ans);
        help.pop_back();
    }
}
vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    pp(s, 0, {}, ans);
    return ans;
}
int main()
{
    string s;
    cin >> s;
    vector<vector<string>> ans = partition(s);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}

// diff not using ispalindrome function

#include <bits/stdc++.h>
using namespace std;
bool paindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
void pp(string s, int indx, vector<string> help, vector<vector<string>> &ans)
{
    if (indx == s.size())
    {
        ans.push_back(help);
        return;
    }
    for (int i = 1; i <= s.size(); i++)
    {
        if (i + indx > s.size())
            return;

        string sub = s.substr(indx, i);
        if (!paindrome(sub))
            return;

        help.push_back(sub);
        pp(s, indx + sub.size(), help, ans);
        help.pop_back();
    }
}
vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    pp(s, 0, {}, ans);
    return ans;
}
int main()
{
    string s;
    cin >> s;
    vector<vector<string>> ans = partition(s);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
