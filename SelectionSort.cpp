#include<iostream>
using namespace std; 
int main(){
int size;
cout<<"\nEnter number of element you have: ";
cin>>size;
int array[size];

cout<<"\nEnter the elements\n";
for(int i=0;i<size;i++){
    cout<<"Element "<<i+1<<" :";
    cin>>array[i];
}

cout<<"\nARRAY: ";
for(int i=0;i<size;i++){
    cout<<" | "<<array[i];
}
 int count=1;
cout<<"\nARRAY SORTING PROCESS";
for(int i=0;i<size;i++)
{
    for(int j=i;j<size;j++)
    {
        int temp=array[j];
        if(array[i]>array[j]){
            array[j]=array[i];
            array[i]=temp;
           
        }

    }
   

     cout<<"\n step"<<count<<" :";
    for (int m=0;m<size;m++)
    {
        cout<<" | "<<array[m];
    }
    count++;
}


    return 0;
}