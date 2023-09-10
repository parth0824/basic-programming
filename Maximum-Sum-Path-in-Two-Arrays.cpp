#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> a, b;
        for (int i = 0; i < x; i++)
        {
            int q;
            cin >> q;
            a.push_back(q);
        }
        for (int i = 0; i < y; i++)
        {
            int q;
            cin >> q;
            b.push_back(q);
        }

        int i, j;
        i = j = 0;
        int s1, s2;
        s1 = 0;
        s2 = 0;
        int sum = 0;
        // 122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34
        while (i < a.size() && j < b.size())
        {
            if (a[i] == b[j])
            {
                sum += max(s1, s2);
                sum += b[j];
                s1 = 0;
                s2 = 0;
                i++;
                j++;
            }
            else if (a[i] > b[j])
            {
                s2 += b[j];
                j++;
            }
            else
            {
                s1 += a[i];
                i++;
            }
        }
        while (i < a.size())
        {
            sum += a[i];
            i++;
        }
        while (j < b.size())
        {
            sum += b[j];
            j++;
        }

        cout << sum << endl;
    }
    return 0;
}