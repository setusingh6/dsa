// Maximum Sum Subarray (Kadane's Algorithm)

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

    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        sum+=a[i];
        maxi=max(maxi,sum);

        if(sum<0){
            sum=0;
        }
    }

    cout<<"maximum subarray sum = "<<maxi<<endl;
}
