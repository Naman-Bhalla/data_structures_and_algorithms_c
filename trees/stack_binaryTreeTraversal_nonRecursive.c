//
// Created by Naman Bhalla on 09/08/17.
//

#include <stdio.h>
#include <stdlib.h> //for exit()

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

int main(void){
    return 0;
}