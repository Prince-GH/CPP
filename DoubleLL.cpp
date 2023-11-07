#include<iostream>
using namespace std;

struct ddll{
    ddll*last=NULL;
    int data=0;
    ddll*next=NULL;
};

ddll*createNode(){
    int n;
    cout<<"Enter no. of nodes you want: ";
    cin>>n;
    ddll*head=NULL;
    ddll*tail=NULL;
    for(int i=1;i<=n;i++){
        ddll*newNode=new ddll();
        cout<<"Enter data for node "<<i<<" :";
        cin>>newNode->data;
        newNode->last=NULL;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            newNode->last=tail;
            tail=newNode;
        }
    }
    return head;
}

void display(ddll*HEAD){
    while(HEAD!=NULL){
        cout<<"--> "<<HEAD->data;
        HEAD=HEAD->next;
    }
}

int main(){
    ddll*DDLL=createNode();
    display(DDLL);
    return 0;
}