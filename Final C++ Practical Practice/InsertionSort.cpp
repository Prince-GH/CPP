#include<iostream>
using namespace std;
int main(){
int n=9;
int array[n]={3,1,4,1,5,9,2,6,5};
cout<<"\nARRAY: ";
for(int p=0;p<n;p++){
    cout<<" | "<<array[p];
}

for(int i=1;i<n;i++){

//========================================================
 cout<<"\nSteps: ";
for(int i=0;i<n;i++){f
    cout<<" | "<<array[i];
}
//========================================================    

    int k=array[i];
    for(int j=i-1; j>=0 && array[j]>k;j--){
        array[j+1]=array[j];
        array[j]=k;
        cout<<"\n\tI_Steps: ";
        for(int i=0;i<n;i++){
        cout<<" | "<<array[i];
}
    }
}

cout<<"\nSORTED ARRAY: ";
for(int p=0;p<n;p++){
    cout<<" | "<<array[p];
}
    return 0;
}