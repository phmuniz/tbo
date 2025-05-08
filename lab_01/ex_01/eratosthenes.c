#include "eratosthenes.h"
#include "node.h"
#include <stdlib.h>
#include <stdio.h>

struct Eratosthenes {

    Node ** vector;
    int size;
    int index;
};

Eratosthenes * eratosthenesConstructor(int n) {

    Eratosthenes * e = calloc(1, sizeof(Eratosthenes));

    e->size = n - 1;

    e->vector = calloc(e->size, sizeof(Node*));

    for(int i = 2; i <= n; i++) {

        Node * node = nodeConstructor(i);

        e->vector[i-2] = node;
    }

    e->index = 0;
}

void markMultiples(Eratosthenes * e) {

    Node * currentNode = e->vector[e->index];

    int currentPrimeNumber = nodeGetValue(currentNode);

    for(int i = e->index + 1; i < e->size; i++) {

        Node * node = e->vector[i];
        int value = nodeGetValue(node);

        if(value % currentPrimeNumber == 0) nodeMark(node);
    }
}

bool findNext(Eratosthenes * e) {

    for(int i = e->index + 1; i < e->size; i++) {

        Node * node = e->vector[i];
        
        if(!nodeIsMarked(node)) {
            e->index = i;
            return true;
        }
    }

    return false;
}

void printPrimeNumbers(Eratosthenes * e) {

    for(int i = 0; i < e->size; i++) {

        Node * node = e->vector[i];

        if(!nodeIsMarked(node)) {

            int value = nodeGetValue(node);
    
            printf("%d\n", value);
        }
    }
}

void eratosthenesDestructor(Eratosthenes * e) {

    for(int i = 0; i < e->size; i++) {

        Node * node = e->vector[i];
        nodeDestructor(node);
    }

    free(e->vector);
    free(e);
}