#include<iostream>
using namespace std;

int LinerSearch(int array[],int num,int size){
int Position=0;
for(int i=0;i<size;i++){
    if(array[i]==num){
        Position=i+1;
        break;
    }else if(i==size-1){
        cout<<"NOT FOUND!!";
    }
  }
    return Position;
}

int main(){
int array[]={5,6,4,8,9,2,1};
int size=sizeof(array)/sizeof(array[0]);
int num=10;
cout<<"\nPosition: "<<LinerSearch(array,num,size);
    return 0;
}