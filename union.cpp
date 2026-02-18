//Find Union of Two Arrays

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
    
    unordered_set<int>s(a.begin(),a.end());
    for(int x : b){
    s.insert(x);
    }
    
   
    cout<<"output is:"<<endl;
    for(auto x:s){
        cout<<x<<endl;
    }
}
