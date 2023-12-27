#include<iostream>
using namespace std;
void merge(int low, int mid, int high);
//=====================================================
# define n 10
int array[n];
//====================================================
void split_sort(int low,int high){
    int mid;
if(low!=high){
mid=(low+high)/2;
split_sort(low,mid); //for left split array.
split_sort(mid+1,high); //for right split array/
merge(low,mid,high);
} 
  }


void merge(int low, int mid, int high){
int arrayS[n];
int i=low;
int j=mid+1;
int k=low;

while((i<=mid) && (j<=high)){
    if(array[i]<=array[j]){
        arrayS[k++]=array[i++];
    }else{
        arrayS[k++]=array[j++];
    }
}

while(i<=mid){
    array[k++]=array[i++];
}
while(j<=mid){
    array[k++]=array[j++];
}
}

int main(){

for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<" :";
    cin>>array[i];
}

cout<<"Unsorted Array: ";
for(int i=0;i<n;i++){
    cout<<" | "<<array[i];
}
split_sort(0,n-1);
cout<<"sorted Array: ";
for(int i=0;i<n;i++){
    cout<<" | "<<array[i];
}
    return 0;
}