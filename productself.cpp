//Product of Array Except Self
//Given an array, return a new array where each element is the product of all elements except itself.
//Do not use division.


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
    int prod=1;
    int low=0;
    while(low<n){
        for(int i=0;i<n;i++){
            if(i!=low){
                prod=prod*a[i];
            }
            
        }
        res.push_back(prod);
        low++;
        prod=1;
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
