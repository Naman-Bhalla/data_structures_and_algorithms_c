//
// Created by Naman Bhalla on 09/08/17.
//

#include <stdio.h>
#include <stdlib.h>

#define MAX 10 //Change it accordingly

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};

struct node *stack[MAX];

int top = -1;

void push_stack(struct node *item){
    if(top == (MAX - 1)){
        printf("Stack Overflow\n");
        return;
    }
    top += 1;
    stack[top] = item;
}

struct node *pop_stack(){
    if(top == -1){
        printf("Stack Underflow\n");
        exit(1);
    }

    struct node *item;
    item = stack[top];

    top -= 1;

    return item;
}

int stack_empty(){
    if(top == -1)
        return 1;
    else
        return 0;
}

void postorder(struct node *root){
    if(root == NULL){
        printf("Tree is Empty\n");
        return;
    }

    struct node *ptr, *q;
    ptr = root;

    while(1){
        while(ptr->lchild != NULL){
            push_stack(ptr);
            ptr = ptr->lchild;
        }

        while(ptr->rchild == NULL || ptr->rchild == q){
            printf("%d", ptr->data);
            q = ptr;
            if(stack_empty())
                return;
            ptr = pop_stack();
        }

        push_stack(ptr);
        ptr = ptr->rchild;
    }

    printf("\n");
}