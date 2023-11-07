#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=n-1;
    cout<<"\n\nEnter the size of an array: ";
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        a[i]="_";
    }
    cout<<"\nEnter the elements for your array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Choose=0;
    do{
       cout<<"\n\nCHOOSE:\n1.Insert Value\n2.Delete Value\n3.Replace Value\n4.Increase Size\n5.Show Current array\n6.Exit\n  :";
       cin>>Choose;
       switch (Choose)
        {
         case 1:
             n=n+1;
             a[n]="_";
             cout<<"\nInsert Value";
             int p,q;
             string tempValue,tempValue2;
             cout<<"\nEnter the position:";cin>>p;
             for(int i=n;i>=p;i--){
                a[i]=a[i-1];
             }
             cout<<"Enter the Value:";cin>>tempValue;
             a[p-1]=tempValue;
             cout<<"\nYour array is: ";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             p=0;
             tempValue="_";
             break;
         case 2:
             cout<<"\nDelete Value";
             cout<<"\nYour array is:";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             cout<<"\nEnter the position:";cin>>p;
             p=p-1;
             a[p]="_";
             cout<<"\nYour array is:";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             p=0;
             tempValue="_";
             break;
         case 3:
             cout<<"\nReplace Value";
             cout<<"\nYour array is:";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             cout<<"\nEnter the replacing position:";cin>>p;
             tempValue=a[p-1];
             cout<<"Enter the position to replaced:";cin>>q;
             tempValue2=a[q-1];
             a[q-1]=tempValue;
             a[p-1]=tempValue2;
             cout<<"\nYour array is:";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             p=0;
             q=0;
             tempValue2="_";
             tempValue="_";
             break;
         case 4:
             int tempValue3=n;
             cout<<"\nYour Current array size is "<<n; 
             cout<<"\nIncrease size by :";cin>>n;  
             n=tempValue3+n;
             for(int i=tempValue3;i<n;i++){
                  a[i]="_";
                }
             cout<<"Your Updated array size is "<<n;
             break;
         case 5:
             cout<<"\nYour Current array is: ";
             for(int i=0;i<n;i++){
                 cout<<" | "<<a[i];
                }
             break;
             cout<<"Enter the data: ";
             
         case 6:
             cout<<"\nExit";
             break;
         default:
             cout<<"\nPlease enter correct S.NO from list, Try Again";
             continue;
        }
    } while(Choose!=6);
    return 0;
}