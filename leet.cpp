#include <bits/stdc++.h>
using namespace std;
bool checkInclusion(string s1, string s2) {
    int arr[26] = {0};
    for(int i=0;i<s1.size();i++){
        arr[s1[i] - 97]++;
    }
    for(int i=0;i<s2.size();i++){
        int brr[26] = {0};
        for(int y=i;y<s1.size()+i;y++){
            int x = s2[y] - 97;
            brr[x] = brr[x] + 1;
        }
        int z = 0;
        for(z = 0;z<26;z++){
            if(arr[z] != brr[z]){
                break;
            }
            // eidbaooo
        }
        cout<<z<<"  ";cout<<endl;
        if(z == 26){
            return true;
        }
    }
    return false;
}
int main (){
    cout<<checkInclusion("ab","eidboaoo");
return 0;
}
