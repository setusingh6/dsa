//two sum unserted array

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
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    sort(v.begin(),v.end());
    int left=0;
    int right=v.size()-1;
    int sum;
    while(left<right){
        sum=v[left]+v[right];
        if(sum==target){
            cout<<v[left]<<"and"<<v[right]<<endl;
            break;
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
    }
    
    if(left>=right){
        cout<<"not found"<<endl;
    }
    
    return 0;
    
}
