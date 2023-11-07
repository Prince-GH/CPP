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
       cout<<"\n\nCHOOSE:\n1.Insert Value\n2.Delete Value\n3.Show Current array\n4.Exit\n  :";
       cin>>Choose;
       switch (Choose)
       {
        case 1:
             n=n+1;
             a[n]=0;
             cout<<"\nInsert Value";
             int p,q,Value,Value2;
             cout<<"\nEnter the position:";cin>>p;
             if(p>=n){
                n--;
                cout<<"!!\n  Position excides the size of array.\n!!";
             }else{
             for(int i=n;i>=p;i--){
                a[i]=a[i-1];
             }
             cout<<"Enter the Value:";cin>>Value;
             a[p-1]=Value;
             cout<<"\nYour array is: ";
             for(int i=0;i<n;i++){
                cout<<" | "<<a[i];
             }
             p=0;
             Value=0;}
             break;
        case 2:
         int choose2;
        do{
           
            cout<<"\n\nBy which method you want to search:\n1.By Position\n2.By Element\n3.Exit";
            cin>>choose2;
            switch(choose2){
             case 1:
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
                Value=0;
                break;
             case 2:
                 int i;
                 cout<<"\nYour array is:| ";
                 for( i=0;i<n;i++){
                     cout<<a[i]<<" | ";
                 }
                 cout<<"\nEnter the element you want to Delete: ";
                 cin>>Value2;
                 for(i=0;i<n;i++){
                     if(Value2==a[i]){
                         cout<<"Position: "<<i+1<<" Element: "<<Value2;
                         break;
                     }
                 }
                 if(i==n){
                     cout<<"\nElement "<<Value2<<" Not found!!\n\n";
                 }   
                 cout<<"\nDelete Value";
              
                cout<<"\nEnter the position:";cin>>p;
                p=p-1;
                for(int i=p;i<n;i++){
                a[p]=a[++p];
                }
                 --n;
           
                p=0;
                Value=0;
                break;
            case 3:
                cout<<"\nExit";
                break;    
                default: 
                cout<<"\n Invalid ! entered value:()";
                continue;
               }
               }while(choose2 !=3);

       }
    
   }while(Choose!=4);
   return 0;
}