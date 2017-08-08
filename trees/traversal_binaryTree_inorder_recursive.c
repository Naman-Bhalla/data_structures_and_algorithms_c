//
// Created by Naman Bhalla on 08/08/17.
//


#include <stdio.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};

void inorder(struct node *root){
    if(root == NULL)
        return;
    inorder(root->lchild);
    printf("%d", root->data);
    inorder(root->rchild);
}

int main(void){
    return 0;
}