#include <stdio.h>
#include <stdlib.h>
#include "josephus.h"

struct Josephus {

    int * arr;
    int size;
    int currentIndex;
    int inc;
};

Josephus * josephusConstruct(int n, int m) {

    Josephus * j = (Josephus*)calloc(1, sizeof(Josephus));

    j->size = n;

    j->arr = (int*)calloc(j->size, sizeof(int));

    for (int i = 0; i < j->size; i++)
    {
        j->arr[i] = i+1;
    }

    j->currentIndex = 0;

    j->inc = m-1;

    return j;
}

void josephusRemove(Josephus * j) {

    int idxToRemove = j->currentIndex + j->inc;

    if(idxToRemove >= j->size) idxToRemove = idxToRemove % j->size;

    for (int i = idxToRemove; i < (j->size - 1); i++)
    {
        j->arr[i] = j->arr[i+1];
    }

    j->size--;
    j->currentIndex = idxToRemove;
}

bool josephusHasSolution(Josephus * j) {
    return j->size == 1;
}

void josephusPrintSolution(Josephus * j) {

    if(j->size != 1) printf("This problem has not solution yet.");

    else printf("Josephus solution: %d\n", j->arr[0]);
}

void josephusDestroy(Josephus * j) {

    free(j->arr);
    free(j);
}