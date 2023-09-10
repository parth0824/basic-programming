#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
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

void print(int n, int i, int a, int b, string s)
{
    if (i > n)
        return;
    if (i == n - 1)
    {
        cout << s << endl;
        if (s[s.size() - 1] == ')')
            b--;
        else
            a--;
        s.pop_back();
    }
    if (n > a)
        print(n, i + 1, a + 1, b, s + '(');
    if (n > b && b <= a)
        print(n, i + 1, a, b + 1, s + ')');
}
int main()
{
    int n;
    cin >> n;
    print(n, 0, 0, 0, "");
    return 0;
}