// combinaiton  
#include <bits/stdc++.h>
using namespace std;
void printsum(vector<int> element,int sum,int mysum,string ans,int index){
    if(sum < mysum){
        return ;
    }
    if(sum <= mysum){
        cout<<ans<<endl;
        ans.erase(ans.begin());
        return ;
    }
    for(int i=index;i<element.size();i++){
        printsum(element,sum,mysum+element[i],ans+to_string(element[i])+" ",index);
        index++;
    }
}
int main(){
    int no_of_element;cin>>no_of_element;
    vector<int> element;
    for(int i=0;i<no_of_element;i++){
        int help_to_push_element_in_vector;cin>>help_to_push_element_in_vector;
        element.push_back(help_to_push_element_in_vector);
    }
    sort(element.begin(),element.end());
    int sum;cin>>sum;
    int mysum = 0;
    int index = 0;
    printsum(element,sum,mysum,"",index);
return 0;
}
// permutation      
#include <bits/stdc++.h>
using namespace std;
void printsum(vector<int> element,int sum,int mysum,string ans,int index){
    if(sum < mysum){
        return ;
    }
    if(sum <= mysum){
        cout<<ans<<endl;
        ans.erase(ans.begin());
        return ;
    }
    for(int i=index;i<element.size();i++){
        printsum(element,sum,mysum+element[i],ans+to_string(element[i])+" ",index);
    }
}
int main(){
    int no_of_element;cin>>no_of_element;
    vector<int> element;
    for(int i=0;i<no_of_element;i++){
        int help_to_push_element_in_vector;cin>>help_to_push_element_in_vector;
        element.push_back(help_to_push_element_in_vector);
    }
    sort(element.begin(),element.end());
    int sum;cin>>sum;
    int mysum = 0;
    int index = 0;
    printsum(element,sum,mysum,"",index);
return 0;
}