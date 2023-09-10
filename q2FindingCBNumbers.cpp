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

vi allAns;
bool CBNumber(string ans)
{
    if (ans == "1" || ans == "0" || ans == "")
        return false;
    int n = stoi(ans);
    // cout << n << " ";
    vi v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    auto i = find(v.begin(), v.end(), n);
    if (i != v.end())
        return true;
    for (auto i : v)
    {
        if (n % i == 0)
            return false;
    }
    // cout << ans << " ";
    return true;
}
void subString(string s, int index, string ans){
    if (CBNumber(ans)){
        int a = stoi(ans);
        allAns.pb(a);
    }
    if (index == s.size())
        return;
    subString(s, index + 1, ans + s[index]);
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
        subString(s, i, "");
    string x = s;
    int i = 0;
    int ans = 0;
    while (i < allAns.size()){
        string y = to_string(allAns[i]);
        size_t found = x.find(y);
        if (found != string::npos){
            ans++;
            x.erase(found, y.size() + found);
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// bool check_cb(long long num)
// {
//     if (num == 0 || num == 1)
//         return false;
//     int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
//     for (int i = 0; i < 10; i++)
//         if (arr[i] == num)
//             return true;
//     for (int i = 0; i < 10; i++)
//         if (num % arr[i] == 0)
//             return false;
//     return true;
// }
// bool isVisted(bool visted[], int start, int end)
// {
//     for (int i = start; i < end; i++)
//         if (visted[i])
//             return false;
//     return true;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string str;
//     cin >> str;
//     bool visted[100] = {false};
//     int count = 0;
//     for (int i = 1; i <= str.length(); i++)
//     {
//         for (int j = 0; j <= str.length() - i; j++)
//         {
//             if (check_cb(stoll(str.substr(j, i))) && isVisted(visted, j, i + j))
//             {
//                 count++;
//                 for (int k = j; k < i + j; k++)
//                     visted[k] = true;
//             }
//         }
//     }
//     cout << count;
//     return 0;
// }