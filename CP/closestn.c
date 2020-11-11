#include <stdio.h>


int abs(int a)
{
    if (a < 0) return a *= -1;
    return a;
}

int mod(int x,int N){
    return (x % N + N) %N;
}

int closestN(int n, int m)
{
    int r = mod(n,m);
    int n1 = abs(n+r), n2 = abs(n-r);
    
    if(abs(n - m) == 1)
        return m;
    if (n1 > n2 && (n + r) % m == 0)
        return n + r;
    if (abs(n - m) > abs(n - r))
        return m;
    return n - r;
}

int main()
{
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    printf("%d\n", closestN(N,M));
    return 0;
}
