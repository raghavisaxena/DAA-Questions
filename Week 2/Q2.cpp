 
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t,n,k; 
    cin>>t; 
    while(t--){ 
        cin>>n; 
        vector<int> v(n); 
        vector<vector<int>> res; 
        unordered_map<int,int> m; 
        for(int i=0;i<n;i++){ 
            cin>>v[i]; 
            m[v[i]]=i; 
        } 
        for(int i=0;i<n-2;i++){ 
            m.erase(v[i]); 
            for(int j=i+1;j<n-1;j++){ 
                m.erase(v[j]); 
                if(m.find(v[i]+v[j])!=m.end()){ 
                    int k=m[v[i]+v[j]]; 
                    res.push_back({i+1,j+1,k+1}); 
                } 
                m[v[j]]=j; 
            } 
        } 
        if(res.empty()){ 
            cout<<"No subsequence found."<<endl; 
        } 
        else{ 
            for(auto i:res){ 
                for(auto j:i){ 
                    cout<<j<<" "; 
                } 
                cout<<endl; 
            } 
        } 
        cout<<endl; 
    } 
} 
