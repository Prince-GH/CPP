#include<iostream>
using namespace std;
int main(){
int size;
cout<<"\nEnter the size of array: ";
cin>>size;
int array[size];
cout<<"\nEnter data for array>>>>>>>>>";
for(int i=0;i<size;i++){
    cout<<"DATA "<<i+1<<" :";
    cin>>array[i];
}

cout<<"\nARRAY: ";
for(int i=0;i<size;i++){
    cout<<" | "<<array[i];
}

// //find the 2nd largest number in array.
// int temp=0;
// for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//         if(array[i]>array[j]){
//             temp=array[i];
//             array[i]=array[j];
//             array[j]=temp;
//         }
//     }
// }

// cout<<"\nARRAY: ";
// for(int i=0;i<size;i++){
//     cout<<" | "<<array[i];
// }

int cout=0,largest=0;
for(int i=0;i<size;i++){
   for(int j=0;j<size;j++){
    if(array[i]>array[j]){
        
    }
   }
}
    return 0;
}