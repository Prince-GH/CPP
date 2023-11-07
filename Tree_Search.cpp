#include<iostream>
using namespace std;

struct Tree{
    Tree*Left=NULL;
    int data=0;
    Tree*Right=NULL;
};

Tree*CreateTree();
void Insert(Tree*Leafnode,Tree*newNode);
void Display(Tree*root);
void Search(Tree*root);


Tree*CreateTree(){
    int n;
    cout<<"Enter no. of nodes you want: ";
    cin>>n;

    Tree*ROOT=NULL;
    Tree*Child=NULL;
    for(int i=1;i<=n;i++){
        Tree*node=new Tree();
        cout<<"Enter data for "<<i<<" node: ";
        cin>>node->data;
        node->Right=NULL;
        node->Left=NULL;

        if(ROOT==NULL){
            ROOT=node;
            Child=node;
            
        }else{
            Insert(Child,node);
            // Child=node;
        }
    }    
    return ROOT;
}



void Insert(Tree*Leafnode,Tree*newNode){
        if(newNode->data>Leafnode->data){
            if(Leafnode->Right==NULL){
                Leafnode->Right=newNode;
            }else{
                Insert(Leafnode->Right,newNode);
            }
        }else if(newNode->data<Leafnode->data){
                if(Leafnode->Left==NULL){
                    Leafnode->Left=newNode;
                }else{
                    Insert(Leafnode->Left,newNode);
                }
            }else{
                cout<<"DUBLICATE VALUE ARE NOT ALLOWERD!!";
    }
}


void InsertTree(Tree*Leafnode){
    Tree*newTree=CreateTree();
    Insert(Leafnode,newTree);
}


void PreOrder(Tree*root){
    
   if(root!=NULL){
    cout<<"| "<<root->data;
    PreOrder(root->Left);
    PreOrder(root->Right);
   }
}

void Inorder(Tree*root){
    
   if(root!=NULL){
    Inorder(root->Left);
    cout<<"| "<<root->data;
    Inorder(root->Right);
   }
}

void PostOrder(Tree*root){
   if(root!=NULL){
    PostOrder(root->Left);
    PostOrder(root->Right);
    cout<<"| "<<root->data;
    
   }
}

void Search(Tree*root,int n){
    if(root!=NULL){
    Search(root->Left,n);
    if(root->data==n){
        cout<<n<<" FOUND!!";
    }
    Search(root->Right,n);
  }
}

void Delete(Tree*Search,int value){
    
}


int main(){
    Tree*TREE=CreateTree();
    int c=0;
    do
    {cout<<"\n1.Insert   2.Search   3.Display   4.Exit\nCHOOSE:";
     cin>>c;
        switch(c)
        {
        case 1:{
            InsertTree(TREE);
            }break;
        case 2:{
            int n;
            cout<<"Search by value: ";
            cin>>n;
            Search(TREE,n);
            }break;
        case 3:{
            int p;
                 do{cout<<"\n\t\t\t1.PreOrder    2.InOrder   3.PostOrder   4.EXIT\nCHOOSE:";
                 cin>>p;
                 switch(p){
                    case 1:{
                        cout<<"\t\t\t";
                        cout<<"PreOrder";
                        PreOrder(TREE);
                    }break;
                    case 2:{
                        cout<<"\t\t\t";
                        cout<<"InOrder";
                        Inorder(TREE);
                    }break;
                    case 3:{
                        cout<<"\t\t\t";
                        PostOrder(TREE);
                    }break;
                    case 4:{
                        cout<<"\t\t\t";
                        cout<<"EXIT!";
                    }break;
                    default :{
                        cout<<"\t\t\t";
                        cout<<"INVALID ENTITY!!";
                    }break;
                 }
                 }while(p!=4);
            }break;
        case 4:{
            cout<<"\nEXIT🔴";
            }break;
        default:{
            cout<<"\nInvalid!!!";
            }break;
        }
    } while(c!=4);
 return 0;
}














 //if(root->data==n){
        //         cout<<root->data<<" found in right subTree";
        //     }else{
        //         cout<<n <<" not found";
        //     }
        //     Search(root->Right);
        // }else{
        //     if(n<root->data){
        //         if(root->data==n){
        //             cout<<root->data<<" found in left subTree";
        //         }else{
        //             cout<<n <<" not found";
        //         }
        //         Search(root->Left);
        //     }
        // }