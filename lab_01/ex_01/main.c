#include <stdio.h>
#include <stdlib.h>
#include "eratosthenes.h"

int main() {

    int n;

    scanf("%d", &n);

    Eratosthenes * e = eratosthenesConstructor(n);

    while(true) {

        markMultiples(e);

        if(!findNext(e)) break;
    }

    printPrimeNumbers(e);

    eratosthenesDestructor(e);

    return 0;
}