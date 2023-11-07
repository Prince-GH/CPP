#include<iostream>
using namespace std;
#define MAX 100
int TOP=-1;  //At initial point top point to -1 means its not pointing to any element or space in stack(array).
int stack[MAX];

void PUSH(int n){
if(TOP==MAX){
    cout<<"OVERFLOW";
}else{
    for(int i=0;i<n;i++){
    TOP++;
    cout<<"Enter the element: ";
    cin>>stack[TOP];
    }
}
}

void POP(){
if(TOP==-1){
    cout<<"UNDERFLOW";
}else{
    TOP--;
} 
}

void DISPLAY(){
for(int i=TOP;i>=0;i--){
    cout<<stack[i]<<"\n";
}
}

int main(){
system("cls");
int CHOOSE;
do
{
    cout<<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n5.CHOOSE: ";
    cin>>CHOOSE;
    switch (CHOOSE)
    {
    case 1:{system("cls");
        int n;
        cout<<"Enter no of element you want to push: ";
        cin>>n;
        PUSH(n);
    }break;
    case 2:{system("cls");
        POP();
        DISPLAY();

    }break;
    case 3:{system("cls");
        DISPLAY();
    }break;
    case 4:{system("cls");
        cout<<"EXIT>>";
    }break;
    default:{system("cls");
        cout<<"\nInvalid";
    }
        break;
    }
} while (CHOOSE!=4);
    return 0;
}