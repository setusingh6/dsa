//Move Zeroes to End: Move all zeroes in an array to the end while maintaining the order of non-zero elements.

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
    
    int zero=0;
    int off=0;
    
    for(int i=0;i<n;i++){
        
            if(a[i]==0){
                zero++;
                continue;
            }
            a[off]=a[i];
            off++;
    }
    int k=n-zero;
    for(int i=0;i<zero;i++){
        a[k]=0;
        k++;
    }
    cout<<"output will be"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}
