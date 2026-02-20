// Sort an Array of 0s, 1s, and 2s: Sort an array consisting of only 0s, 1s, and 2s.


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>res;
    int n;
    cout<<"enter the length of 1st array"<<endl;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0;i<n;i++){
       if(a[i]==0){
           zero++;
       }
       else if(a[i]==1){
           one++;
       }
       else{
           two++;
       }
    }
    for(int i=0;i<zero;i++){
        res.push_back(0);
    }
    for(int i=0;i<one;i++){
        res.push_back(1);
    }
    for(int i=0;i<two;i++){
        res.push_back(2);
    }
    cout<<"output is"<<endl;
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
