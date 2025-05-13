#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_

typedef struct BinarySearchTree BinarySearchTree;

typedef struct Node Node;

BinarySearchTree * bst_construct();

void bst_push(BinarySearchTree * bst, int key);

void bst_destroy(BinarySearchTree * bst);

#endif