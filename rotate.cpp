// Rotate Array to the Left by k Positions

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

    k = k % n;

    reverse(a.begin(), a.begin()+k);
    reverse(a.begin()+k, a.end());
    reverse(a.begin(), a.end());

    cout<<"rotated array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
