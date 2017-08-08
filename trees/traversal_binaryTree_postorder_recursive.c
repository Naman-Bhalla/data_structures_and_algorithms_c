//
// Created by Naman Bhalla on 08/08/17.
//

#include <stdio.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};

void postorder(struct node *root){
    if(root == NULL)
        return;
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d", root->data);
}

int main(void){
    return 0;
}