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
int start=0,jump=sqrt(n),end=jump; 
for(int i=jump;i<n;i+=jump){ 
if(++count&&v[i]>k){ 
break; 
} 
start=i; 
end+=jump; 
} 
for(int i=start;i<min(end,n);i++){ 
if(v[i]==k){ 
flag=1; 
break; 
} 
} 
if(flag){ 
cout<<"Present "<<count<<endl; 
} 
else{ 
cout<<"Not Present "<<count<<endl; 
} 
} 
}