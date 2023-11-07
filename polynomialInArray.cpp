#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter the degree of your polynomial: ";
    cin>>n;
    int array[n];
    cout<<"Enter the constant value of your polynomial:\n";
    for(int i=n;i>=0;i--){
      cin>>array[i];
    }
    cout<<"\nPolynomial is:";
    for(int i=n;i>=0;i--){
        cout<<array[i];
        cout<<"X";
        cout<<"^";
        cout<<i;
        if(i==0)break;
        cout<<" + ";
    }
    return 0;
}