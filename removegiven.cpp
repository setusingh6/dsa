//Remove given Element from Array

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
    int target;
    cout<<"enter target"<<endl;
    cin>>target;
       
    a.erase(remove(a.begin(),a.end(),target),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}
