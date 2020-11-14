#include <stdio.h>
#include <stdlib.h>
#include "../mergesort.c"

int solve(int arr[], int n)
{
    int s = 0, z = 0, i = 0;
    merge_sort(arr, 0, n-1);

    for (i = 0; i < n; i++)
        if (++z == arr[i]){
            s++;
            z = 0;
        }

    return s;
}

int main()
{
    int t, N, x;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        scanf("%d", &N);

        int *A = (int*)malloc(sizeof(int)*N);
        for (int j = 0; j < N; j++){
            scanf("%d", &x);
            A[j] = x;
        }

        int r = solve(A,N);

        printf("%d\n", r);
    }

    return 0;
}
