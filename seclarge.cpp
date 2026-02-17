//find the second largest element

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter lenght of array"<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int maxi=INT_MIN;
    int secmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>maxi){
            secmax=maxi;
            maxi=v[i];
        }
        else if(v[i]>secmax&&v[i]!=maxi){
            secmax=v[i];
        }
    }
    cout<<"Second largest element :"<<secmax<<endl;
    return 0;
    
}
