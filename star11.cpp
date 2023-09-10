#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < (n * 2) + 1; i++)
    {
        int x = n;
        for (int j = 0; j < (2 * n) + 1; j++)
        {
            if ((((i + j) >= (2 * n)) && (i >= j)) || ((i <= j) && ((i + j) <= 2 * n)))
            {
                cout << x << " ";
            }
            else
            {
                cout << "  ";
            }
            int t;
            if (j < n)
            {
                x--;
            }
            else
                x++;
        }
        cout << endl;
    }
}
