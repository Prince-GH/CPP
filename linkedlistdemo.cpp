#include<iostream>
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



void delNode(int value, node*& head) {
    while (head != NULL && head->data == value) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
    node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->next->data == value) {
            node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
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

  do{system("cls");
    fullLinkedList(current);
    cout<<"\n\n1.Insert node\n2.Delete node\n3.Show Full Linked List\n4.Exit\nChoose:";
    cin>>choose;
    cout<<"\n";
    switch (choose)
    {
    case 2:{system("cls");
      int value;
      fullLinkedList(current);
      cout<<"\n\nEnter the value you want to delete: ";
      cin>>value;
      delNode(value,current);
    }break;
    
    default:{system("cls");
      cout<<"\nChoose Valid Option.\n";
    }break;
    }
  }while(choose!=4);
  return 0;
}