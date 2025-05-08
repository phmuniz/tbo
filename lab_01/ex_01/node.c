#include "node.h"
#include "stdlib.h"

struct Node {

    int value;
    bool marker;
};


Node * nodeConstructor(int value){

    Node * n = calloc(1, sizeof(Node));

    n->value = value;
    n->marker = false;
}

int nodeGetValue(Node * n) {
    return n->value;
}

void nodeMark(Node * n) {
    n->marker = true;
}

bool nodeIsMarked(Node * n) {
    if(n->marker) return true;
    return false;
}

void nodeDestructor(Node * n) {
    free(n);
}