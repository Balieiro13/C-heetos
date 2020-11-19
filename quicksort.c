#include <stdio.h>
#include <stdlib.h>

int mch(int *lst, int e, int d)
{
    int i = e - 1, j, key;
    int x = lst[d-1];
    for (j = e; j < d; j++){ 
        if (lst[j] <= x){
           i++;
           key = lst[j];
           lst[j] = lst[i];
           lst[i] = key;
       }
    }
    return i;
}

void ordena (int *lst, int l, int r)
{
    if (l >= r - 1) return;
    int m = mch(lst, l, r);
    ordena(lst, l, m);
    ordena(lst, m+1, r);
}

void quicksort(int *lst, int size){
    ordena(lst, 0, size);
}

int main()
{
    int v[10] = {99, 33, 55, 77, 11, 22, 88, 66, 33, 44};

    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);
    printf("\n");

    quicksort(v, 10);

    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
