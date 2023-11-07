#include<iostream>
using namespace std;
void check(int num);
int main(){
    int arr[10];
    cout<<"Enter the elements for your array:\n";
    for(int i=0;i<10;i++){
        cout<<":";
        cin>>arr[i];
        check(arr[i]);
    }
    return 0;
}
void check(int num){
    if(num%2==0){
        cout<<num<<" is EVEN"<<endl;
    }else{
        cout<<num<<" is ODD"<<endl;
    }
}