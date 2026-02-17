//find sum of array elements

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
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+v[i];
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
    
}
