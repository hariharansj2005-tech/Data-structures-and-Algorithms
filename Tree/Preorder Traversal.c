//Preorder Traversal 

#include <stdio.h>
#include<stdlib.h>
struct Node
 {
     int data;
     struct Node *left;
     struct Node *right;
 };
 struct Node *createNode(int value)
 {
     struct Node *newNode=malloc(sizeof(struct Node));
     newNode->data=value;
     newNode->left=NULL;
     newNode->right=NULL;
     return newNode;
 }
 struct Node *createTree()
 {
     int value;
     printf("Enter node values (-1 for no node) : ");
     scanf("%d",&value);
     if(value==-1)
     return NULL;
     
     struct Node *root=createNode(value);
     
     printf("Enter left child of %d : ",value);
     root->left=createTree();
     
     printf("Enter right child of %d : ",value);
     root->right=createTree();
     
     return root;
 }
void preorder(struct Node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
        
    }
}
int main()
{
    struct Node *root;
    printf("Create binary tree\n ");
    root=createTree();
  
    printf("\npreorder Traversal :");
    preorder(root);
