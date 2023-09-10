#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define um unordered_map<int, int>
#define us unordered_set<int>

bool s = 0;
vvc fans;

void findPart( int x, int y, vvc c, vvc &ans)
{
    if (x == c.size() - 1 && y == c[0].size() - 1)
    {
        ans[x][y] = '1';
        if (s == 0)
        {
            s = 1;
            fans = ans;
        }
        return;
    }
    if (x == c.size() || y == c[0].size() || x < 0 || y < 0 || c[x][y] == 'X')
    {
        return;
    }
    c[x][y] = 'X';
    ans[x][y] = '1';
    findPart( x + 1, y, c, ans);
    findPart( x - 1, y, c, ans);
    findPart( x, y + 1, c, ans);
    findPart( x, y - 1, c, ans);
    c[x][y] = 'O';
    ans[x][y] = '0';
}
int main()
{
    int n, k;
    cin >> n >> k;
    vvc c;
    vvc ans;
    for (int i = 0; i < n; i++)
    {
        vc x;
        vc x1;
        for (int j = 0; j < k; j++)
        {
            char y;
            cin >> y;
            x.push_back(y);
            x1.push_back('0');
        }
        ans.push_back(x1);
        c.push_back(x);
    }
    findPart( 0, 0, c, ans);
    if (ans[n - 1][k - 1] == '0')
    {
        cout << "NO PATH FOUND";
    }
    else
    {
        for (auto i : fans)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}




//  to get all possible path present 

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define vi vector<int>
// #define vc vector<char>
// #define vb vector<bool>
// #define vs vector<string>
// #define vvi vector<vector<int>>
// #define vvc vector<vector<char>>
// #define um unordered_map<int, int>
// #define us unordered_set<int>
// bool s = 0;
// vvc fans;
// vector<vvc> ffans;

// void findPart( int x, int y, vvc c, vvc &ans)
// {
//     if (x == c.size() - 1 && y == c[0].size() - 1)
//     {
//         ans[x][y] = '1';
//         fans = ans;
//         ffans.push_back(fans);
        
//         // ans[x][y] = '0';
//         return;
//     }
//     if (x == c.size() || y == c[0].size() || x < 0 || y < 0 || c[x][y] == 'X')
//     {
//         return;
//     }
//     c[x][y] = 'X';
//     ans[x][y] = '1';
//     findPart( x + 1, y, c, ans);
//     findPart( x - 1, y, c, ans);
//     findPart( x, y + 1, c, ans);
//     findPart( x, y - 1, c, ans);
//     c[x][y] = 'O';
//     ans[x][y] = '0';
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vvc c;
//     vvc ans;
//     for (int i = 0; i < n; i++)
//     {
//         vc x;
//         vc x1;
//         for (int j = 0; j < k; j++)
//         {
//             char y;
//             cin >> y;
//             x.push_back(y);
//             x1.push_back('0');
//         }
//         ans.push_back(x1);
//         c.push_back(x);
//     }
//     findPart( 0, 0, c, ans);
//     if (ans[n - 1][k - 1] == '0')
//     {
//         cout << "NO PATH FOUND";
//     }
//     else
//     {
//         // for (auto i : fans)
//         // {
//         //     for (auto j : i)
//         //         cout << j << " ";
//         //     cout << endl;
//         // }
//     }
//     cout<<ffans.size()<<endl;
//     for(int i=0;i<ffans.size();i++){
//         for(auto j : ffans[i]){
//             for(auto k : j){
//                 cout<<k<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl<<endl;
//     }
//     return 0;
// }