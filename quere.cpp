#include<iostream>
using namespace std;
#define MAX 10
int rear=-1;
int front=-1;
int queue[MAX];

void create(){
    int n;
    cout<<"Enter no. of element you want: ";
    cin>>n;
    if(front==-1 && rear==-1){
        front++;
        for(int i=1;i<=n;i++){
            rear++;
            cout<<"Enter the data "<<i<<": ";
            cin>>queue[rear];
        }
    }
}

void enqueue(){
if(rear==MAX-1){
    cout<<"OVERFLOW!!";
}else{
    rear++;
    cout<<"Enter data:";
    cin>>queue[rear];
}
}

void dequeue(){
    if(front==-1){
        cout<<"UNDERFLOW!!";
    }else{
        front++;
    }
}

void display(){
    for(int i=front;i<=rear;i++){
        if(i==front){cout<<"Front--> |";}
        cout<<queue[i];
        cout<<" |";
        if(i==rear){cout<<" <--Rear";}
    }
}

int main(){system("cls");
    int c;
    do{cout<<"\n\n1.Enqueue  2.Dequeue  3.Create  4.Display  5.Exit\nCHOOSE: ";
    cin>>c;
    switch(c)
    {
        case 1:{system("cls");
            enqueue();
            cout<<endl;
            display();
        }break;
        case 2:{system("cls");
            dequeue();
             cout<<endl;
            display();
        }break;
        case 3:{system("cls");
            create();
        }break;
        case 4:{system("cls");
            display();
        }break;
        case 5:{system("cls");
            cout<<"Exit";
        }break;
        default:{system("cls");
            cout<<"INVALID";
        }break;
    }
    }while(c!=5);
    return 0;
}