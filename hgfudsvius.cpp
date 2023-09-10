#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n / 2 + 1; i++)
    {
        int x = i + 1;
        for (int j = 0; j < n; j++)
        {
            if (n - (2 * i) - 1 <= j && n - 1 - i >= j)
            {
                cout << x << " ";
                x--;
            }
            else
            {
                cout << "  ";
            }
        }

        x = 1;
        for (int j = n - 1 - 1; j >= 0; j--)
        {
            if (n - (2 * i) - 1 <= j && n - 1 - i >= j)
            {
                cout << x << " ";
                x++;
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
    for (int i = 1; i < n / 2 + 1; i++)
    {
        int s = n / 2 - i + 1;
        for (int j = 0; j < n; j++)
        {
            if (j >= i * 2 && j <= n / 2 + i)
            {
                cout << s << " ";
                s--;
            }
            else
            {
                cout << "  ";
            }
        }
        s = 1;
        for (int j = n - 2; j >= 0; j--)
        {
            if (j >= i * 2 && j <= n / 2 + i)
            {
                cout << s << " ";
                s++;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}