#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> u;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            u[x]++;
        }

        int m = 0;
        int j = -1;
        for (auto i : u)
        {
            if (m < i.second)
            {
                m = i.second;
                j = i.first;
            }
        }
        bool chk = 0;
        int ans = 0;
        for (auto i : u)
        {
            if (i.first != j)
            {
                if (i.first % j == 0)
                {
                    chk = 1;
                    ans++;
                }
            }
        }
        if (chk == 0 && u.size() == n)
        {
            cout << n << endl;
            continue;
        }

        cout << ans << endl;
    }
    return 0;
}