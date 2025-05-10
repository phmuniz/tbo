#ifndef _JOSEPHUS_H_
#define _JOSEPHUS_H_

#include <stdbool.h>

typedef struct Josephus Josephus;

Josephus * josephusConstruct(int n, int m);

/*
Remove o M-iésimo termo
*/
void josephusRemove(Josephus * j);

bool josephusHasSolution(Josephus * j);

void josephusPrintSolution(Josephus * j);

void josephusDestroy(Josephus * j);

#endif