#include <stdio.h>

int min(int a, int b){
    return (a<b) ? a:b;
}

int solve (int c, int m, int x)
{
    int s = (c + m + x)/3; // maximo de grupos q dá pra formar
    return min(min(c,m),s); // como tem de haver 1 c e 1 m em cada grupo s <= c e m para ser resposta.
}

int main()
{
    int t, c, m, x, i, j, k;

    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d %d %d", &c, &m, &x);
        k = solve(c,m,x);
        printf("%d\n", k);
    }

    return 0;
}
