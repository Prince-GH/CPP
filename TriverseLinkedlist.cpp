#include<iostream>
using namespace std;
struct node{
    int data;
    node*next=NULL;
};

node*createNode(){
    int n;
    cout<<"\n Enter no. of nodes you want to insert: ";
    cin>>n;
    node*Head=NULL;
    node*Tail=NULL;
    for(int i=1;i<=n;i++){
        node*newnode=new node();
        cout<<"Enter data "<<i<<": ";
        cin>>newnode->data;
        newnode->next=NULL;
        if(Head==NULL){
            Head=newnode;
            Tail=newnode;
        }else{
            Tail->next=newnode;
            Tail=newnode;
        }
    }
    return Head;
}

void Trivarse(node*HEAD){
    while(HEAD!=NULL){
        cout<<HEAD->data<<endl;
        HEAD=HEAD->next; 
    }
}

int main(){
    node*LIST=createNode();
    Trivarse(LIST);
    return 0;
}