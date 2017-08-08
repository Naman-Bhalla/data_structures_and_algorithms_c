//
// Created by Naman Bhalla on 08/08/17.
//

#include <stdio.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};

void preorder(struct node *root){
    if(root == NULL)
        return;
    printf("%d", root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}

int main(void){
    return 0;
}