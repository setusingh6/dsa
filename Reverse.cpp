//reverse of an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"enter array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left=0;
    int right=n-1;
    while(left<right){
        int temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
    cout<<"hello"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
