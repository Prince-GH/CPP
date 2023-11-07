#include<iostream>
using namespace std;
int main(){
    int n=n-1;
    cout<<"\n\nEnter the size of an array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    cout<<"\nEnter the elements for your array:\n";
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
             a[n]=0;
             cout<<"\nInsert Value";
             int p,q,tempValue,tempValue2;
             cout<<"\nEnter the position:";cin>>p;
             if(p>=n){
                n--;
                cout<<"!!\n  Position excides the size of array.\n!!";
             }else{
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
             tempValue=0;}
             break;
         case 2:
             cout<<"\nDelete Value";
             cout<<"\nYour array is:";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             cout<<"\nEnter the position:";cin>>p;
             p=p-1;
             
        
            for(int i=p;i<n;i++){
                a[p]=a[++p];
            }
            --n;
             cout<<"\nYour array is:";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             p=0;

             tempValue=0;
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
             tempValue2=0;
             tempValue=0;
             break;
         case 4:
             tempValue=n;
             cout<<"\nYour Current array size is "<<n; 
             cout<<"\nIncrease size by :";cin>>n;  
             n=tempValue+n;
             for(int i=tempValue;i<n;i++){
                  a[i]=0;
                }
             cout<<"Your Updated array size is "<<n;
             cout<<"\nEnter elements for incresed size:\n ";
             for(int i=tempValue;i<n;i++){
                cin>>a[i];
             }
             cout<<"\nYour array is:";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             break;
         case 5:
             cout<<"\nYour Current array is: ";
             for(int i=0;i<n;i++){
                 cout<<" | "<<a[i];
                }
             break;
         case 6:
             cout<<"\nExit";
             break;
         default:
             cout<<"\nPlease enter cor rect S.NO from list, Try Again";
             continue;
        }
    } while(Choose!=6);
    return 0;
}
