#include<iostream>
using namespace std;

struct stack{
    int data;
    stack*next;
};

stack* CREATE(){
    int n;
    cout<<"Enter no. of element: ";
    cin>>n;
    stack *First=NULL;
    stack *Last=NULL;
    for(int i=1;i<=n;i++){
        stack*newStack=new stack();
        cout<<"Enter data"<<i<<" :";
        cin>>newStack->data;
        newStack->next=NULL;
        if(First==NULL){
            First=newStack;
            Last=newStack;
        }else{
            Last->next=newStack;
            Last=newStack;
        }
    }
    return First;
}

void PUSH(stack*first){
    while (first!=NULL){
        if(first->next==NULL){
            stack *newStack = new stack;
            cout<<"Enter data: ";
            cin>>newStack->data;
            newStack->next=NULL;
            first->next=newStack;
            break;
        }else{
            first=first->next;
        }
        
    }
}

void POP(stack*first){
    if(first==NULL){
        cout<<"UNDERFLOW!!";
    }else{
          while(first!=NULL){
        if(first->next->next==NULL){
            first->next=NULL;
        }
        first=first->next;
    }
    }
   
}

void DISPLAY(stack*first){
while (first!=NULL)
{
    cout<<first->data;

    if(first->next==NULL){
        cout<<"->TOP";
    }else{
        cout<<"->";
    }
    first=first->next;
}
}

int main(){
    stack*first=CREATE();
    int c;
do{cout<<"\n\n1.PUSH  2.POP  3.DISPLAY  4.EXIT\nCHOOSE: ";
cin>>c;
switch (c)
{
case 1:{
    PUSH(first);
}break;
case 2:{
    POP(first);
}break;
case 3:{
    DISPLAY(first);
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