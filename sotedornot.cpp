//check array is sorted or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter lenght of array"<<endl;
    cin>>n;
    vector<int>v(n);
    int i;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
            continue;
        }
        else {
            cout<<"Not Sorted";
            break;
        }
    }
    if(i==n-1){
        cout<<"sorted";
    }
    return 0;
    
}
