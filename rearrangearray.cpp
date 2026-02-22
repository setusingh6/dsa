// Rearrange Array Alternately

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

    int i=0;
    int j=n-1;

    vector<int>res;

    while(i<=j){
        if(i!=j){
            res.push_back(a[j]);
            res.push_back(a[i]);
        }
        else{
            res.push_back(a[i]);
        }
        i++;
        j--;
    }

    cout<<"rearranged array"<<endl;
    for(int x:res){
        cout<<x<<" ";
    }
}
