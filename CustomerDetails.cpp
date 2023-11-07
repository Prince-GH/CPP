#include<iostream>
#include<string>
using namespace std;

struct customer{
 string name;
 int Account_no;
 int balance;
};


int main(){
  cout<<"Enter the no. of costomer";
  int n=0;
  cin>>n;
  customer empl[n];

  for(int i=0;i<n;i++){
    cout<<"\n<------------Enter customer details------------->\n";
    cout<<"\nS_no: "<<i+1;
    cout<<"\nName: ";
    cin>>empl[i].name;
    cout<<"Account No: ";
    cin>>empl[i].Account_no;
    cout<<"Balance: ";
    cin>>empl[i].balance;
  }

  cout<<"\n<------------Full customer details------------->\n";
  for(int i=0;i<n;i++){
    cout<<"\nName: "<<empl[i].name;
    cout<<"\nAccount No: "<<empl[i].Account_no;
    cout<<"\nBalance: "<<empl[i].balance;
  cout<<"\n-------------------------------------------------\n";
  }

  for(int i=0;i<n;i++){
    
    if(empl[i].balance<200){
      cout<<"\nCustomer whose balance is less then $200\n\n";
      cout<<"\n"<<empl[i].name;
    }
  }

  for(int i=0;i<n;i++){
    
    if(empl[i].balance>1000){
      cout<<"\nIncrimanted balance\n\n";
      empl[i].balance=empl[i].balance+100;
      cout<<"\n"<<empl[i].name;
      cout<<"\n"<<empl[i].balance;
    }
  }

return 0;
}