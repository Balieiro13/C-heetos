#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int pivo(int *lst, int e, int d)
{
    int i = e - 1, j, key;
    int x = lst[d-1];
    for (j = e; j < d; j++){ 
        if (lst[j] <= x){
           i++;
           swap(&lst[j], &lst[i]);
       }
    }
    return i;
}

void ordena (int *lst, int l, int r)
{
    if (l < r){
        int m = pivo(lst, l, r);
        ordena(lst, l, m);
        ordena(lst, m+1, r);
    }
}

int main()
{
    int v[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 4, 7, 9, 3, 2, 3, 8};
    int n = sizeof(v)/sizeof(int);

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    ordena(v, 0, n);

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
