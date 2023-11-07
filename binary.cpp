#include<iostream>
using namespace std;
int main(){
    int n,a[100],value;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter element of array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nArray is: ";
    for(int i=0;i<n;i++){
        cout<<" | "<<a[i];
    }
    int beg=0,end=n-1,mid;
    cout<<"\nEnter the value you want to search: ";
    cin>>value;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=value){
        
        if(value<a[mid]){
            end=mid-1;
        }else{
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(a[mid]==value){
        cout<<"Positon of value is: "<<mid+1;
    }
    else{
        cout<<"The element not found.";
    }
return 0;
}