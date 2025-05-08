#ifndef _NODE_H_
#define _NODE_H_

#include <stdbool.h>

typedef struct Node Node;

Node * nodeConstructor(int value);

int nodeGetValue(Node * n);

void nodeMark(Node * n);

bool nodeIsMarked(Node * n);

void nodeDestructor(Node * n);

#endif