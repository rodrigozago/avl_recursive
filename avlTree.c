//
// Created by leosw on 05/10/18.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int key;
    void *data;
    struct node *left;
    struct node *right;
    int bal;
}Node;

void createTree(Node *r){
    r->right = NULL;
    r->left = NULL;
    r->bal = 0;
}

Node *createNode(Node *r, int key, void *data){
    Node *newNode = malloc(sizeof(Node));
    newNode->key = key;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int main (void){
    Node *n = createNode(n, 8, (void *) 9384);

    printf("%d", n->key);
}