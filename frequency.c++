//count frequency of elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter lenght of array"<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<int,int>mp;
    
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(auto it : mp){
        cout << it.first << " -> " << it.second << endl;
    }
}
