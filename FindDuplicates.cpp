//Find Duplicates in an Array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    cout<<"output is"<<endl;
    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<endl;
        }
    }
}
