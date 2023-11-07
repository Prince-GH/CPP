#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next=NULL;
};

node*createList(int num){
    node*start=NULL;
    node*end=NULL;
    for(int i=1;i<=num;i++){
        node*newnode=new node();
        cout<<"NODE "<<i<<" DATA: ";
        cin>>newnode->data;
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
            end=newnode;
        }else{
            end->next=newnode;
            end=newnode;
        }
    }
    return start;
}

void display(node*head){
    while(head!=NULL){
        cout<<"->"<<head->data;
        head=head->next;
    }
}

node*revarse(node*&head){
    node*preptr=NULL;
    node*currptr=head;
    node*nextptr=NULL;
    while (currptr!=NULL){
    nextptr=currptr->next;
    currptr->next=preptr;
    preptr=currptr;
    currptr=nextptr;
    }
    return preptr;
}

int main(){
    cout<<"Reverse the linked list";
    int n;
    cout<<"\nEnter the no of nodes you want: ";
    cin>>n;
    node*List=createList(n);
    display(List);
    cout<<"\n\n\n";
    node*RList=revarse(List);
    cout<<"\n\n\n";
    display(RList);
    return 0;
}
