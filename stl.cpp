#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;cin>>a;
    vector<int> b;
    for(int i=0;i<a;i++){
        int c;cin>>c;
        b.push_back(c);
    }
    int it = *min_element(b.begin(),b.end()-1);
    int itt = *max_element(b.begin(),b.end());
    cout<<it;
    cout<<itt;
}