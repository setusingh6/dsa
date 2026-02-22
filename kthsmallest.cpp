// Find the Kth Smallest Element

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

    int k;
    cout<<"enter k"<<endl;
    cin>>k;

    sort(a.begin(),a.end());

    cout<<"kth smallest element = "<<a[k-1]<<endl;
}
