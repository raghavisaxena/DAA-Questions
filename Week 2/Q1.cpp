#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t,n,k; 
    cin>>t; 
    while(t--){ 
        bool flag=0; 
        int count=0; 
        cin>>n; 
        vector<int> v(n); 
        for(int i=0;i<n;i++){ 
            cin>>v[i]; 
        } 
        cin>>k; 
        vector<int>::iterator l,r; 
        l=lower_bound(v.begin(),v.end(),k); 
        if(l==v.end()||*l!=k){ 
            cout<<"Not Present "<<endl; 
            continue; 
        } 
        r=upper_bound(v.begin(),v.end(),k); 
        cout<<k<<" - "<<(r-v.begin())-(l-v.begin())<<endl; 
    } 
}