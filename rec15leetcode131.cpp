#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vvi vector<vector<int>>
#define um unordered_map<int, int>
#define ll long long int
vs v;
vector<vs> vv;
bool palindrome(string s)
{
    int i = 0;
    string x = "";
    while (i < s.size())
    {
        if (s[i] == ' ')
        {
            v.push_back(x);
            x = "";
            i++;
            continue;
        }
        x += s[i];
        i++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        int j = 0;
        int k = v[i].size() - 1;
        while (j <= k)
        {
            if (v[i][j] != v[i][k])
            {
                return false;
            }
            j++;
            k--;
        }
    }
    return true;
}
void print(string s, string ans, int index)
{
    if (index == s.size())
    {
        if (palindrome(ans))
        {
            vv.push_back(v);
            for (auto i : v)
                cout << i << " ";
            cout << endl;
        }
        v.clear();
        return;
    }
    for (int i = index; i < s.size(); i++)
    {
        ans = ans + s[i] + ' ';
        print(s, ans, i + 1);
        ans.pop_back();
    }
}
int main()
{
    string a;
    cin >> a;
    print(a, "", 0);
    return 0;
}