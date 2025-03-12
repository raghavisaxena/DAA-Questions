#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    int key,c=0,s=0;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            c++;
            arr[j+1]=arr[j];
            s++;
            j=j-1;
        }
        arr[j+1]=key;
    }
    cout<<"c: "<<c<<endl<<"s: "<<s<<endl;
    cout<<"sorted arr: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr,n);
}