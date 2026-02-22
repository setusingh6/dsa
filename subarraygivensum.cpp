// Find Subarray with Given Sum

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

    int target;
    cout<<"enter target sum"<<endl;
    cin>>target;

    int sum=0;
    int start=0;

    for(int i=0;i<n;i++){
        sum+=a[i];

        while(sum>target && start<=i){
            sum-=a[start];
            start++;
        }

        if(sum==target){
            cout<<"subarray found from "<<start<<" to "<<i<<endl;
            return 0;
        }
    }

    cout<<"no subarray found"<<endl;
}
