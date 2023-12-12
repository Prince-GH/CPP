#include<iostream>
using namespace std;

struct tree{
    tree*left=NULL;
    int data;
    tree*right=NULL;
};

void check(tree*Leafnode,tree*newnode){
    if(newnode->data>Leafnode->data){
        if(Leafnode->right==NULL){
            Leafnode->right=newnode;
        }else{
            check(Leafnode->right,newnode);
        }
    }else if(newnode->data<Leafnode->data){
         if(Leafnode->left==NULL){
            Leafnode->left=newnode;
         }else{
            check(Leafnode->left,newnode);
         }
    }else{
        cout<<"\nDATA SHOULD BE IDENTICAL";
    }
}

tree*Createtree(){
    tree*root=NULL;
    int n;
    cout<<"Enter No of node: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        tree*node=new tree();
        cout<<"\nEnter data "<<i<<": ";
        cin>>node->data;
        node->left=NULL;
        node->right=NULL;

        if(root==NULL){
            root=node;
        }else{
            check(root,node);
        }
    }
    return root;
}

void Preorder(tree*root){
    if(root!=NULL){
    cout<<"| "<<root->data;
    Preorder(root->left);
    Preorder(root->right);
    }
}
void Inorder(tree*root){
    if(root!=NULL){
    Inorder(root->left);
    cout<<"| "<<root->data;
    Inorder(root->right);
    }
}
void Postorder(tree*root){
    if(root!=NULL){
    Postorder(root->left);
    Postorder(root->right);
    cout<<"| "<<root->data;
    }
}

tree* Delete(tree*root,int data){
   tree*parent=NULL;
   tree*current=root;

    while(current!=NULL && current->data!=data){// THis loop trivarse to the 'data' untill we reach the leafnode without data and we found the data...
        parent=current;
        if(data>current->data){
           current=current->right;
        }else if(data<current->data){
            current=current->left;
        }
    }
    if(current==NULL){
        cout<<"DATA NOT FOUND";
    }else if(current->data==data && current->left==NULL && current->right==NULL){//When node has no child
        if(data>parent->data){
            parent->right=NULL;
        }else if(data<parent->data){
            parent->left=NULL;
        }
    }

return root;
}


int main(){
tree*ROOT=Createtree();
cout<<"\nPREORDER: ";
Preorder(ROOT);
cout<<"\nINORDER: ";
Inorder(ROOT);
cout<<"\nPOSTORDER: ";
Postorder(ROOT);
int data;
cout<<"Enter the data you want to delete: ";
cin>>data;
ROOT=Delete(ROOT,data);
Inorder(ROOT);
    return 0;
}