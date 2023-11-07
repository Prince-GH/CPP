#include<iostream>
using namespace std;

struct MAX_ARRAY{
    int MAX;
    MAX_ARRAY*NEXT=NULL;
};

int CreateArray(){
    int size;
    cout<<"\nENTER SIZE OF ARRAY: ";
    cin>>size;
    int array[size];
    cout<<"\nEnter Element of array------>\n";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int MAX=array[0];
    for(int i=0;i<size;i++){
        if(MAX<=array[i]){
            MAX=array[i];
        }
    }
    return MAX;
}

MAX_ARRAY*CreateList(int MAX){
    MAX_ARRAY*HEAD=NULL;
    MAX_ARRAY*TAIL=NULL;
    MAX_ARRAY*NEWVAL=new MAX_ARRAY();
    NEWVAL->MAX=MAX;
    NEWVAL->NEXT=NULL;
    if(HEAD==NULL){
        HEAD=NEWVAL;
        TAIL=NEWVAL;
    }else{
        TAIL->NEXT=NEWVAL;
        TAIL=NEWVAL;
    }
    return HEAD;
}

void InsertList(MAX_ARRAY*head,int MAX){
    while(head!=NULL){
        if(head->NEXT==NULL){
            MAX_ARRAY*NEWVAL=new MAX_ARRAY();
            NEWVAL->MAX=MAX;
            NEWVAL->NEXT=NULL;
            head->NEXT=NEWVAL;
            break;
        }
        head=head->NEXT;
    }
}

void Display(MAX_ARRAY*head){

    while(head!=NULL){
        cout<<head->MAX;
        if(head->NEXT!=NULL){
            cout<<"-->";
        }
        head=head->NEXT;
    }
}

int main(){
    int MAX=CreateArray();
    MAX_ARRAY*LIST=CreateList(MAX);
    int c;
do{
    cout<<"\n1.CREATE ARRAY  2.DISPLAY LINKED-LIST  3.EXIT\nCHOOSE:";
    cin>>c;
    switch (c)
    {
      case 1:{
       int MAX=CreateArray();
       InsertList(LIST,MAX);
      }break;
      case 2:{
        Display(LIST);
      }break;
      case 3:{
        cout<<"EXIT!!";
      }break;
    default:{
        cout<<"INVALID!!";
    }break;
    }
}while(c!=3);
    return 0;
}