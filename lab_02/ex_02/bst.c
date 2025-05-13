#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

struct BinarySearchTree {
    Node * head;
    int size;
};

struct Node {
    int key;
    Node * left;
    Node * right;
};

BinarySearchTree * bst_construct() {

    BinarySearchTree * bst = (BinarySearchTree*)calloc(1, sizeof(BinarySearchTree));

    bst->head = NULL;
    bst->size = 0;

    return bst;
}

Node * node_construct(int key) {

    Node * node = (Node*)calloc(1, sizeof(Node));

    node->left = NULL;
    node->right = NULL;
    node->key = key;

    return node;
}

void node_destroy(Node * n) {
    free(n);
}

Node * insert_node(BinarySearchTree * bst, Node * current, int key) {

    if(current == NULL) {
        current = node_construct(key);
        bst->size++;
        return current;
    }
    if(key > current->key) current->right = insert_node(bst, current->right, key);
    else if(key < current->key) current->left = insert_node(bst, current->left, key);
    
    return current;
}

void bst_push(BinarySearchTree * bst, int key) {

    bst->head = insert_node(bst, bst->head, key);
}

void destroy_nodes(BinarySearchTree * bst, Node *node) {
    if (node == NULL) return;

    destroy_nodes(bst, node->left);
    destroy_nodes(bst, node->right);

    printf("%d\n", node->key);

    node_destroy(node);
}

void bst_destroy(BinarySearchTree *bst) {
    if (bst == NULL || bst->head == NULL) return;

    destroy_nodes(bst, bst->head);

    free(bst);
}