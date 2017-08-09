//
// Created by Naman Bhalla on 09/08/17.
//

#include <stdio.h>
#define MAX 10 //Change it accordingly

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};

struct node *queue[MAX];

int front = -1, rear = -1;

void insert_queue(struct node *item){
    if(rear == MAX - 1){
        printf("Stack Overflow\n");
        return;
    }
    rear++;
    queue[rear] = item;
}

struct node *del_queue(){
    if(front == -1 || front == rear + 1){
        printf("Queue Underflow\n");
        return NULL;
    }
    struct node *item;
    item = queue[front];
    front++;
    return item;
}

int queue_empty(){
    if(front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}

void levelTraversal(struct node *root){
    if(root == NULL){
        printf("Tree is Empty\n");
        return;
    }

    struct node *ptr = root;
    insert_queue(ptr);

    while(!queue_empty()){
        ptr = del_queue();
        printf("%d", ptr->data);

        if(ptr->lchild != NULL)
            insert_queue(ptr->lchild);
        if(ptr->rchild != NULL)
        insert_queue(ptr->rchild);
    }
    printf("\n");
}