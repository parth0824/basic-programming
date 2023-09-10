#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define po pop_back
#define pii pair<int, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>

// by using for loop
void printCombination(vi v, int t, vi help, int sum, int i, vvi &ans)
{
    if (sum == t)
    {
        ans.pb(help);
        return;
    }
    if (sum > t)
    {
        return;
    }
    for (int j = i; j < v.size(); j++)
    {
        // sum += v[j];
        help.pb(v[j]);
        printCombination(v, t, help, sum + v[j], j, ans);
        // sum -= v[j];
        help.pop_back();
    }
}

// by taking and picking one
void printCombination1(vi v, int t, vi help, int sum, int i, vvi &ans)
{
    if (sum > t || i == v.size())
        return;
    if (sum == t)
    {
        ans.pb(help);
        return;
    }
    if (v[i] <= t)
    {
        help.pb(v[i]);
        printCombination1(v, t, help, sum + v[i], i, ans);
        help.po();
    }
    printCombination1(v, t, help, sum, i + 1, ans);
}

vvi combinationSum(vi v, int t)
{
    vvi ans;
    vi help;
    // printCombination(v, t, help, 0, 0, ans);
    printCombination1(v, t, help, 0, 0, ans);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int t;
    cin >> t;
    vvi ans = combinationSum(v, t);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
