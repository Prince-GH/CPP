#include<iostream>
using namespace std;
int main(){
int n=5;
int array[n]={40,65,66,75,80};
int beg=0,end=n-1;
int mid=beg+(end-1)/2;
int value=75;

while(beg<=end && array[mid]!=value){
    if(value<array[mid]){
        end=mid-1;
    }else{
        beg=mid+1;
    }
    mid=beg+(end-1)/2;
}

if(array[mid]==value){
    cout<<"Position of value"<<value<<" is:"<<mid+1;
}else{
    cout<<"Value not found.";
}

    return 0;
}