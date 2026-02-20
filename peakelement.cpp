//Find Peak Element: A peak element is greater than its neighbors. Find one such element.


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
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            cout<<"output:"<<a[i];
            break;
        }
    }
}
