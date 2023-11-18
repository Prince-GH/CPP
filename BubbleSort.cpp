#include<iostream>
using namespace std;
int main(){
int size;
cout<<"\nEnter the size of array:";
cin>>size;
int array[size];
cout<<"\nEnter the data for you array:\n";
for(int i=0;i<size;i++){
    cout<<"Enter element "<<i+1<<" :";
    cin>>array[i];
}
cout<<"\nUNSORTED ARRAY: ";
for(int i=0;i<size;i++){
    cout<<" | "<<array[i];
}
for(int i=0;i<size-1;i++){
    cout<<"\nSTEP "<<i+1<<" :\n";
    for(int j=0;j<size-1-i;j++){
       for(int m=0;m<size;m++){
        cout<<array[m];
        if(m==j){
            cout<<"<--->";
        }else{
            cout<<" | ";
        }
       }
        if(array[j]>array[j+1]){
           int temp=array[j];
           array[j]=array[j+1];
           array[j+1]=temp;
           cout<<"\tSwip "<<array[j]<<" and "<<array[j+1]<<endl;
        }else if(array[j]==array[j+1]){
            cout<<"\tNo Swap!! "<<array[j]<<" equal to "<<array[j+1]<<endl;
        }else{
               cout<<"\tNo Swap!! "<<array[j]<<" is Smaller then "<<array[j+1]<<endl;
        }
    }
}
cout<<"\nSORTED ARRAY: ";
 for(int m=0;m<size;m++){
        cout<<" | "<<array[m];
    }
    return 0;
}