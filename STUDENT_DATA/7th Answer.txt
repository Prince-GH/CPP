#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next=NULL;
};

node* create(int n){
     node*head=NULL;
     node*tail=NULL;
    for(int i=1;i<=n;i++){
        node*newnode=new node();
        cout<<"Enter data for node "<<i<<": ";
        cin>>newnode->data;
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    } 
    return head;
    }

void nthNode(node*Head){
    node*First=Head;
    int TotalNoOfNode=0;
    int positionFromLast;
    cout<<"\nEnter Position from last: ";
    cin>>positionFromLast;


    while(Head!=NULL){
        TotalNoOfNode++;
        Head=Head->next;
    }

    int n=(TotalNoOfNode-positionFromLast)+1;
    int count=0;

    while(First!=NULL){
        count++;
        if(count==n){
            cout<<"Position "<<positionFromLast<<" Data: "<<First->data;
        }else{
            First=First->next;
        }
    }


}
    
    int main(){
        int n;
        cout<<"No of node: ";
        cin>>n;
        node*List=create(n);
        nthNode(List);
        return 0;
    }


