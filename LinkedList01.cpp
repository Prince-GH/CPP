#include<iostream>
#include<conio.h>
using namespace std;

struct node{
  int data;
  struct node *next=NULL;
};

node*create_list(int num){
  node*head=NULL;
  node*tail=NULL;
  for(int i=1;i<=num;i++){
     node * newNode = new node();
     cout<<"Enter data for node "<<i<<": ";
     cin>>newNode->data;
     newNode->next=NULL;
     if(head==NULL){
      head=newNode;
      tail=newNode;
     }else{
      tail->next=newNode;
      tail=newNode;
     }
  }
  return head;
}

void begNode(int num,node*&preHead){
  node*Newhead=NULL;
  node*Newtail=NULL;
  for(int i=1;i<=num;i++){
     node * newNode = new node();
     cout<<"Enter data for node "<<i<<": ";
     cin>>newNode->data;
     newNode->next=NULL;
     if(Newhead==NULL){
      Newhead=newNode;
      Newtail=newNode;
     }else{
      Newtail->next=newNode;
      Newtail=newNode;
     }
  }
     Newtail->next=preHead;
     preHead=Newhead;
}

void btwNode(int value,int noOfNode,node*preHead){
  while(preHead!=NULL){
  if(preHead->data==value){
    node*nextHead=preHead->next;
    node*newHead=NULL;
    node*newTail=NULL;
    for(int i=1;i<=noOfNode;i++){
      node * newNode = new node();
      cout<<"Enter data for node "<<i<<": ";
      cin>>newNode->data;
      newNode->next=NULL;
      if(newHead==NULL){
       newHead=newNode;
       newTail=newNode;
      }else{
       newTail->next=newNode;
       newTail=newNode;
      }
    }
     newTail->next=nextHead;
     preHead->next=newHead;
     }
      preHead=preHead->next;
    }
}

void endNode(int num,node*preHead){
 while(preHead!=NULL){
    if(preHead->next==NULL){
      node*newHead=NULL;
      node*newTail=NULL;
      for(int i=1;i<=num;i++){
        node*newNode=new node();
        cout<<"Enter data for node "<<i<<" :";
        cin>>newNode->data;
        newNode->next=NULL;
        if(newHead==NULL){
          newHead=newNode;
          newTail=newNode;
        }else{
          newTail->next=newNode;
          newTail=newNode;
        }
      }
      preHead->next=newHead;
      break;
    } 
      preHead=preHead->next;
 }
}

void delNode(int value,node*&preHead){
  node*tempPreHead=NULL;
  node*tempNextHead=NULL;
  int NodeIndex=1;
  if(preHead->data==value && NodeIndex==1){
    preHead=preHead->next;
    NodeIndex++; 
  }else if(NodeIndex==1){
    while(preHead!=NULL){
    if(preHead->data==value){
      tempNextHead=preHead->next;
      tempPreHead->next=tempNextHead;
    }
    tempPreHead=preHead;
    preHead=preHead->next;
  }
  }
} 

void fullLinkedList(node*current){
  cout<<"Linked List: ";
  while(current!=NULL){
    cout<<"| "<<current->data;
    current=current->next;
  }
}

int main(){
  int n;
  cout<<"\n\nEnter the no. of nodes you want: ";
  cin>>n;
  node * list=create_list(n);
  node * current=list;
  int choose=0;

  do{
    system("cls");
    fullLinkedList(current);
    cout<<"\n\n1.Insert node\n2.Delete node\n3.Show Full Linked List\n4.Exit\nChoose:";
    cin>>choose;
    cout<<"\n";
    switch (choose)
    {
    case 1:{
      system("cls");
      char choose;
      do
      {
        cout<<"\n\nA.From beginning\nB.In Between\nC.From End\nD.Show Full List\nE.Exit\nChoose:";
        cin>>choose;
        cout<<"\n\n";
        switch (choose)
        {
        case 'A':{
          system("cls");
          int noOfNode;  
          cout<<"\nEnter the no. of nodes you want to Insert: ";
          cin>>noOfNode;
          begNode(noOfNode,current);
        }break;
        case 'B':{
          system("cls");
          int value,noOfNode;
          fullLinkedList(current);
          cout<<"\nAfter which vlaue you want to add the nodes: ";
          cin>>value;
          cout<<"Enter the no. of nodes you want to Insert: ";
          cin>>noOfNode;
          btwNode(value,noOfNode,current);
        }break;
        case 'C':{
          system("cls");
          int noOfNode;
          cout<<"Enter the no. of nodes you want to Insert: ";
          cin>>noOfNode;
          endNode(noOfNode,current);
        }break;
        case 'D':{
          system("cls");
         fullLinkedList(current);
        }break;
        case 'E':{
          system("cls");
         cout<<"\nExit>>>>\n";
        }break;
        default:{
          system("cls");
          cout<<"Choose Valid Option";
        }break;
        }
      } while (choose!='E');  
    }break;

    case 2:{
      system("cls");
      int value;
      fullLinkedList(current);
      cout<<"\n\nEnter the value you want to delete: ";
      cin>>value;
      delNode(value,current);
    }break;

    case 3:{
      system("cls");
      fullLinkedList(current);
    }break;

    case 4:{
      system("cls");
      cout<<"\nEXIT>>>>\n";
    }break;
    
    default:{
      system("cls");
      cout<<"\nChoose Valid Option.\n";
    }break;
    }
  }while(choose!=4);
  return 0;
}
