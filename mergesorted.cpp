//Merge Two Sorted Arrays

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>res;
    
    int n;
    cout<<"enter the length of 1st array"<<endl;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    
    int x;
    cout<<"enter the length of 2nd array"<<endl;
    cin>>x;
    vector<int>b(x);
    for(int i=0;i<b.size();i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    
    int i=0;
    int j=0;
    
    while(i<n&&j<x){
        if(a[i]>b[j]){
            res.push_back(b[j]);
            j++;
        }
        else{
            res.push_back(a[i]);
            i++;
    }
    }
    while(i<n){
        res.push_back(a[i]);
        i++;
    }
    while(j<x){
        res.push_back(b[j]);
        j++;
    }
    cout<<"output is"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}
