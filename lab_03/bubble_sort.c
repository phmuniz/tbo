#include "item.h"

void sort(Item *a, int lo, int hi) {

    for (int i = lo; i <= hi; i++) {

        for (int j = hi; j >= lo + 1; j--) {
            compexch(a[j-1], a[j]);
        }
    }
}