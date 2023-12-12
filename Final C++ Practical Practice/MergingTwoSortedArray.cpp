#include<iostream>
using namespace std;
int main(){
int max1=10;
int max2=10;
int max3=20;
int i=0,j=0,k=0;
int array1[max1]={1,20,30,40,50,60,70,80,90,100};
int array2[max2]={2,15,25,35,45,65,75,85,95,105};
int array3[max3];
cout<<"\nARRAY 1: ";
for(int i=0;i<max1;i++){
    cout<<" | "<<array1[i];
}
cout<<"\nARRAY 2: ";
for(int i=0;i<max2;i++){
    cout<<" | "<<array2[i];
}
//========================COMPARE=AND=MERGE======================
while((i<max1) && (j<max2) ){
    if(array1[i]<array2[j]){
        array3[k++]=array1[i++];
    }else{
        array3[k++]=array2[j++];
    }
//     cout<<"\nTestFire_ARRAY 3: ";
// for(int i=0;i<max3;i++){
//     cout<<" | "<<array3[i];
// }
}

//====if extra value left with array1====
while(i<max1){
    array3[k++]=array1[i++];
}
//====if extra value left wit array2=====
while(j<max2){
    array3[k++]=array2[j++];
}
//===============================================================
cout<<"\nARRAY 3: ";
for(int i=0;i<max3;i++){
    cout<<" | "<<array3[i];
}
    return 0; 
    }