#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main(int argc, char * argv[]) {

    int N = atoi(argv[1]);

    Item * array = (Item*)calloc(N, sizeof(Item));

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    
    clock_t start, stop;
    start = clock();
    sort(array, 0, N-1);
    stop = clock();

    double time_taken = ((double) stop - start) / CLOCKS_PER_SEC;
    printf("Elapsed time: %.3f\n", time_taken);

    printf("Array sorted: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}