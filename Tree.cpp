#include<iostream>
using namespace std;
struct tree{
   tree*left=NULL;
   int data;
   tree*right=NULL;
};
//This check function check the right position and insert the node;
void check(tree*leafNode,tree*node){

   if(node->data>leafNode->data){
      if(leafNode->right==NULL){
         leafNode->right=node;
      }else{
         check(leafNode->right,node);
      }

   }else if(node->data<leafNode->data){
         if(leafNode->left==NULL){
            leafNode->left=node;
         }else{
            check(leafNode->left,node);
         }
      }else{
         cout<<"\n\nDATA SHOULD BE INDENTICAL";
      }
   
}

tree*createTree(int n){
   tree*root=NULL;

   //Create a node and initilize it.
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

void inorder(tree*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<" | "<<root->data;
        inorder(root->right);
    }
}
void preorder(tree*root){
   if(root!=NULL){
      cout<<" | "<<root->data;
      preorder(root->left);
      preorder(root->right);
   }
}
void postorder(tree*root){
   if(root!=NULL){
      postorder(root->left);
      postorder(root->right);
      cout<<" | "<<root->data;
   }
}

int main(){
   tree*ROOT=createTree(5);
   cout<<"\nInorder: ";
   inorder(ROOT);
   cout<<"\nPreorder: ";
   preorder(ROOT);
   cout<<"\nPostorder: ";
   postorder(ROOT);
   return 0;
}