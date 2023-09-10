#include <bits/stdc++.h>
using namespace std;
int call(int a[],int n){
    
    int max = *max_element(a,a+n);
    cout<<endl;
    cout<<max<<endl;
    int j;
    for(int i=0;i<n;i++){
        if(a[i] == max){
            j = i;
            break;
        }
    }
    int ans = max * (n-1);
    int o = 0;
    for(int i = j + 1;i<n;i++){
        int s = a[i] * o;
        o++;
        ans = ans + s;
    }
    for(int i=0;i<j;i++){
        int s = a[i] * o;
        o++;
        ans = ans + s;
    }
    return ans;
}
string replaceSpaces(string &s){
	string a = "";
	for(int i=0;i<s.size();i++){
		if(s[i] != ' ')
			a = a + s[i];
		else{
			a = a + '@';
			a = a + '4';
			a = a + '0';
		}
	}
	s = a;
    return s;
}
string removeOccurrences(string s, string p) {
    int a = p.size();
    int b = s.find(p);
    for(int i=0;b != -1;i++){
        s.erase(b,a);
        b = s.find(p);
    }
    return s;
}
string removeDuplicates(string s) {
    stack<char> a;
    for(int i=0;i<s.size();i++){
        if(a.empty()){
            a.push(s[i]);
        }
        else if(a.top() == s[i]){
            a.pop();
        }
        else {
            a.push(s[i]);
        }
    }
    string c = "";
    while(!a.empty()){
    c = c + a.top();
    a.pop();
    }
    reverse(c.begin(),c.end());
    return c;
}
int main(){
    string s = "";
    cout<<removeDuplicates(s)<<endl;
return 0;
}