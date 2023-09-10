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

void findMyAnswer(vi &v, int &t, int j, int sum, vi help, int &ans)
{
    if (sum > t)
    {
        return;
    }
    else if (sum == t)
    {
        ans++;
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        help.pb(v[i]);
        findMyAnswer(v, t, i, sum + v[i], help, ans);
        help.po();
    }
}
int combinationSum4(vector<int> &v, int t)
{
    int ans = 0;
    findMyAnswer(v, t, 0, 0, {}, ans);
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
    cout << combinationSum4(v, t);

    return 0;
}
