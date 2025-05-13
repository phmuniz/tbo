#include <stdio.h>
#include "bst.h"

int main() {

    int n;
    BinarySearchTree * bst = bst_construct();

    //FALTA CALCULAR ALTURA DA ARVORE

    while(scanf("%d", &n)) {

        if(n == -1) break;

        bst_push(bst, n);
    }
    
    bst_destroy(bst);

    return 0;
}