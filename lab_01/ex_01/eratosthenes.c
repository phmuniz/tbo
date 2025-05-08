#include "eratosthenes.h"
#include <stdlib.h>
#include <stdio.h>

struct Eratosthenes {

    int * vector;
    int size;
    int index;
};

Eratosthenes * eratosthenesConstructor(int n) {

    Eratosthenes * e = calloc(1, sizeof(Eratosthenes));

    e->size = n + 1;

    e->vector = calloc(e->size, sizeof(int));

    for(int i = 0; i < e->size; i++) {

        e->vector[i] = 0;
    }

    e->index = 2;
}

void markMultiples(Eratosthenes * e) {

    for(int i = 2 * e->index; i < e->size; i += e->index) {

        e->vector[i] = 1;
    }
}

bool findNext(Eratosthenes * e) {

    for(int i = e->index + 1; i < e->size; i++) {
        
        if(!e->vector[i]) {
            e->index = i;
            return true;
        }
    }

    return false;
}

void printPrimeNumbers(Eratosthenes * e) {

    for(int i = 2; i < e->size; i++) {

        int marked = e->vector[i];

        if(!marked) {
    
            printf("%d\n", i);
        }
    }
}

void eratosthenesDestructor(Eratosthenes * e) {

    free(e->vector);
    free(e);
}