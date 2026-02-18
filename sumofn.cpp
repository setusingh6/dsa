//Find the Missing Number: Find the missing number in an array of size n containing numbers from 1 to n.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;

    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }

    int sum=(n*(n+1))/2;
    int s=0;

    for(int i=0;i<n-1;i++){
        s=s+a[i];
    }

    int res=sum-s;
    cout<<"missing value is:"<<res<<endl;
}
