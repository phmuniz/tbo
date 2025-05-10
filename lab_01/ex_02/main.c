#include <stdio.h>
#include "josephus.h"

int main() {

    int n, m;

    scanf("%d %d", &n, &m);

    Josephus * j = josephusConstruct(n, m);

    while (!josephusHasSolution(j)) josephusRemove(j);
    
    josephusPrintSolution(j);

    josephusDestroy(j);

    return 0;
}