#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;cin >> n;
        vector<unordered_set<int>> v;
        for (int i = 0; i < n; i++){
            int k;cin >> k;
            unordered_set<int> y;
            for (int j = 0; j < k; j++){
                int x;cin >> x;
                y.insert(x);
            }
            v.push_back(y);
        }
        unordered_set<int> c;
        bool q = 0;
        for (int i = 0; i < v.size(); i++){
            unordered_set<int> a;
            unordered_set<int> b;
            for (int h = 0; h < v.size(); h++){
                if (h == i){
                    continue;
                }
                a = v[i];
                b = v[h];
                for (auto i : a)
                    c.insert(i);
                for (auto i : b)
                    c.insert(i);
                if (c.size() == 5){
                    cout << "YES\n";
                    q = 1;
                    goto end;
                }
                c.clear();
            }
        }
    end:
        if (q == 0)
            cout << "NO\n";
    }
    return 0;
}