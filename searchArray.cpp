#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n=5,i,element;
    cout<<"Enter elements for array:\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nYour array is:| ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }
    cout<<"\nEnter the element you want to search: ";
    cin>>element;
    for(i=0;i<n;i++){
        if(element==a[i]){
            cout<<"Position: "<<i+1<<" Element: "<<element;
            break;
        }
    }
    if(i==n){
        cout<<"\nElement "<<element<<" Not found!!\n\n";
    }
}