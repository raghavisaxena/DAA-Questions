 
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t,n,k; 
    cin>>t; 
    while(t--){ 
        int count=0; 
        cin>>n; 
        vector<int> v(n); 
        unordered_map<int,int> m; 
        for(int i=0;i<n;i++){ 
            cin>>v[i]; 
            m[v[i]]++; 
        } 
        cin>>k; 
        for(int i=0;i<n;i++){ 
            m[v[i]]--; 
            if(m.find(v[i]-k)!=m.end()){ 
                count++; 
            } 
            m[v[i]]++; 
        } 
        cout<<count<<endl<<endl; 
    } 
}