#include<iostream>
using namespace std;
int main()
{
    int n=0,m=0,p=0,q=0;
    cout<<"\n\n\nEnter the size of your 1st array";
    cout<<"\nNo. of Rows: ";
    cin>>n;
    cout<<"No. of Columns: ";
    cin>>m;

    cout<<"\nEnter the size of your 2nd array";
    cout<<"\nNo. of Rows: ";
    cin>>p;
    cout<<"No. of Columns: ";
    cin>>q;
    if(n==p && m==q){
    cout<<"\n\nYour 1st array is: "<<n<<" X "<<m;
    cout<<"\nYour 2nd array is: "<<p<<" X "<<q;

    int a[n][m],b[p][q],sum[n][q];

    cout<<"\nEnter value for 1st array:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    cout<<"\nEnter the value for 2nd array:\n";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"\n\n1st array: ";
    for(int i=0;i<n;i++){
        cout<<"\n";
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<"\t";
        }
    }

    cout<<"\n\n2nd array: ";
    for(int i=0;i<p;i++){
        cout<<"\n";
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<"\t";
        }
    }

    cout<<"\n\nAddition of 1st and 2nd array: ";
    for(int i=0;i<n;i++){
        cout<<"\n";
        for(int j=0;j<q;j++){
            cout<<sum[i][j]<<"\t";
        }
    }
    }
    else{
        cout<<"\t\t\t\t\n\n\nRows and columns should be same.\n\n\n\n";
    }
    return 0;
}