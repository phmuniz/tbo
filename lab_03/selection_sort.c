#include "item.h"

void sort(Item *a, int lo, int hi) {

    int lessItem;

    for (int i = lo; i <= hi; i++)
    {
        lessItem = i;

        for (int j = i + 1; j <= hi; j++)
        {
            if(less(a[j], a[lessItem])) lessItem = j;
        }
        
        exch(a[i], a[lessItem]);
    }
    
}