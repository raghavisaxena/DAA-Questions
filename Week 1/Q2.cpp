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
int l=0,r=n-1,mid; 
while(l<=r){ 
mid=l+(r-l)/2; 
if(++count&&v[mid]==k){ 
break; 
} 
else if(++count&&v[mid]>k){ 
r=mid-1; 
} 
else{ 
l=mid+1; 
} 
} 
if(v[mid]==k){ 
cout<<"Present "<<count<<endl; 
} 
else{ 
cout<<"Not Present "<<count<<endl; 
} 
} 
}