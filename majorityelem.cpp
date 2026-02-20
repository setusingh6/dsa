// Find Majority Element: Find the element that appears more than n/2 times.


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
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    cout<<"output is"<<endl;
    for(auto it:mp){
        if(it.second>(n/2)){
            cout<<it.first<<" ";
        }
        break;
    }
    
}
