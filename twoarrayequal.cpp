//Check if Two Arrays Are Equal: if two arrays contain the same elements

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
    sort(a.begin(),a.end());
    
    int x;
    cout<<"enter length of array"<<endl;
    cin>>x;
    vector<int>b(x);
    cout<<"enter array element"<<endl;
    for(int i=0;i<x;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    
    if(n!=x){
        cout<<"not equal"<<endl;
        return 0;
    }
    int i=0;
    int j=0;
    
    while(i<n){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            cout<<"not equal"<<endl;
            return 0;
        }
    }
    cout<<"arrays are equal"<<endl;
    
}
