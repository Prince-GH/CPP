#include<iostream>
using namespace std;
struct queue{
    int data;
    queue*next=NULL;
};


queue* create(){
    int n;
    cout<<"Enter no. of element: ";
    cin>>n;
    queue*front=NULL;
    queue*rear=NULL;
    for(int i=1;i<=n;i++){
        queue*newQueue=new queue;
        cout<<"Enter data "<<i<<" :";
        cin>>newQueue->data;
        newQueue->next=NULL;
        if(front==NULL){
            front=newQueue;
            rear=newQueue;
        }else{
            rear->next=newQueue;
            rear=newQueue;
        }
    }
    return front;
}

void enqueue(queue*FRONT){
    queue*newqueue=new queue();
    cout<<"Enter data: ";
    cin>>newqueue->data;
    newqueue->next=NULL;
    while(FRONT!=NULL){
        if(FRONT->next==NULL){
            FRONT->next=newqueue;
            break;
        }else{
            FRONT=FRONT->next;
        }
    }
}

void dequeue(queue*&FRONT){
    FRONT=FRONT->next;
}

void display(queue*FRONT){
    queue*tFront=FRONT;
    while(FRONT!=NULL){
        
        if(tFront==FRONT){
           cout<<"FRONT-->";
        }

        cout<<"| "<<FRONT->data;

        if(FRONT->next==NULL){
            cout<<" |<--REAR";
        }

        FRONT=FRONT->next;
    }
}

int main(){
    queue*front=create();
    int c;
    do{cout<<"\n1.Enqueue  2.Dequeue  3.Display  4.EXIT\nCHOOSE: ";
    cin>>c;
    switch(c){
        case 1:{
            enqueue(front);
        }break;
        case 2:{
            dequeue(front);
        }break;
        case 3:{
            display(front);
        }break;
        case 4:{
            cout<<"EXIT";
        }break;
        default:{
            cout<<"INVALID!!";
        }break;
    }
    }while(c!=4);
    return 0;
}