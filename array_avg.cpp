sd#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum,avg;
    cout<<"\n-------------INPUT------------------\n";
    cout<<"Enter the size of your array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the value for your array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n-------------------------------------\n";
    cout<<"Your array is :| ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" | ";
    }
     cout<<"\n-------------------------------------\n\n";

    for(int i=0;i<n;i++)
    {
        sum +=a[i];
    }
    avg=sum/n;
    cout<<"\n------------OUTPUT------------------\n";
    cout<<"Avg: "<<avg;
    cout<<"\n------------------------------------";

    return 0;
}