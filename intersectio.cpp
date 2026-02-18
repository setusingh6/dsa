//Find Intersection of Two Arrays: Find the common elements between two arrays.

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
        if(a[i]==b[j]){
            res.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<"output is:";
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}
