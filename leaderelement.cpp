//Find the Leader Elements: An element is a leader if it is greater than all elements to its right.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter length of array"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"enter array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>res;
    int j;
    
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                continue;
            }
            else{
                break;
            }
        }
        if(j==n){
            res.push_back(a[i]);
        }
    }
    cout<<"output will be"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}
