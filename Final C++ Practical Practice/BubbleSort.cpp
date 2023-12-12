#include<iostream>
using namespace std;
int main(){
int n=5;
int array[n]={5,4,3,2,1};


for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
         if(array[j]>array[j+1]){
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
    cout<<"\nStep: ";
for(int i=0;i<n;i++){
cout<<" | "<<array[i];
}
}
cout<<"\nSorted array: ";
for(int i=0;i<n;i++){
    cout<<" | "<<array[i];
}



































    return 0;
    }