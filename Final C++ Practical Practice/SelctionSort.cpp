#include<iostream>
using namespace std;
int main(){
int n=5;
int array[n]={45,25,3,48,2};
for(int i=0;i<n;i++){
    cout<<"\nE_Steps: ("<<"i="<<i<<")";
for(int i=0;i<n;i++){
    cout<<" | "<<array[i];
}
    int smallest=i;
    for(int j=i+1;j<n;j++){
        cout<<"\n\t("<<" i= "<<i<<" j= "<<j<<" small_PP="<<smallest<<" small_v="<<array[smallest];
        if(array[smallest]>array[j]){
            smallest=j;
        }

        if(i!=smallest){
            int temp=array[i];
            array[i]=array[smallest];
            array[smallest]=temp;
        }
        

         cout<<"\tI_Steps:";
for(int i=0;i<n;i++){
    cout<<" | "<<array[i];
}

        }
    }

cout<<"\nSorted array: ";
for(int i=0;i<n;i++){
    cout<<" | "<<array[i];
}

    return 0;
}