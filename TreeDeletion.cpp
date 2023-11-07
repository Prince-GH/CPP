#include<iostream>
using namespace std;

struct Tree{
    Tree*Left=NULL;
    int data=0;
    Tree*Right=NULL;
};

void Insert(Tree*Leafnode,Tree*newnode);

Tree*CreateTree(){
    int n;
    cout<<"Enter no of nodes you want to add: ";
    cin>>n;
    Tree*Root=NULL;
    for(int i=1;i<=n;i++){
        Tree*newnode=new Tree();
        cout<<"Enter data for node "<<i<<":";
        cin>>newnode->data;
        newnode->Left=NULL;
        newnode->Right=NULL;
        if(Root==NULL){
            Root=newnode;
        }else{
            Insert(Root,newnode);
        }
    }
    return Root;
}

void Insert(Tree*Leafnode,Tree*newnode){
    if(newnode->data>Leafnode->data){ //MOVE TO RIGHT SIDE OF TREE>>>>
       if(Leafnode->Right==NULL){
        Leafnode->Right=newnode;
       }else{
        Insert(Leafnode->Right,newnode);
       }
    }else if(newnode->data<Leafnode->data){ //MOVE TO LEFT SIDE OF TREE<<<<
             if(Leafnode->Left==NULL){
                Leafnode->Left=newnode;
            }else{
                Insert(Leafnode->Left,newnode);
            }
    }else{
        cout<<"Dublicate no is not allowed!!";
    }
}

void Display(Tree*ROOT){
    if(ROOT!=NULL){
        Display(ROOT->Left);
        cout<<"-->"<<ROOT->data;
        Display(ROOT->Right);
    }
}

void Delete(Tree*ROOT,int value){
    Tree*Parent=NULL;
    Tree*Current=ROOT;
     
     if(Current==value){
        
     }


    if(value>Current->data){
        //move right
        
    }else if(value<Current->data){
        //move left
    }else{
        cout<<value<<" isn't in the tree :( TRY AGAIN!!";
    }
}

int main(){
    Tree*RootData=CreateTree();
    Display(RootData);
    int val;
    cout<<"Enter the value you want to delete: ";
    cin>>val;
    Delete(RootData,val);
    return 0;
}