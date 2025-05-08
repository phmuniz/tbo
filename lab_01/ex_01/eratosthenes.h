#ifndef _ERATOSTHENES_H_
#define _ERATOSTHENES_H_

#include <stdbool.h>

typedef struct Eratosthenes Eratosthenes;

Eratosthenes * eratosthenesConstructor(int size);

void markMultiples(Eratosthenes * e);

bool findNext(Eratosthenes * e);

void printPrimeNumbers(Eratosthenes * e);

void eratosthenesDestructor(Eratosthenes * e);

#endif