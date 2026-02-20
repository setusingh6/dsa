// Find Maximum Product Pair: Find two elements whose product is maximum.


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
    sort(a.begin(),a.end());
    int prod1=a[n-1]*a[n-2];
    int prod2=a[0]*a[1];
    if(prod1>prod2){
        cout<<"output="<<prod1;
    }
    else{
        cout<<"output="<<prod2;
    }
}
