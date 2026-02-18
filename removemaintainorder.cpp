#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_set<int> seen;
    vector<int> result;

    for(int i=0;i<n;i++){
        if(seen.find(a[i]) == seen.end()){
            result.push_back(a[i]);
            seen.insert(a[i]);
        }
    }

    cout<<"output is"<<endl;
    for(int x : result){
        cout<<x<<" ";
    }
}
