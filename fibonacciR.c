#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll int Rfibo(int n, ll int *c)
{
    if (c[n] != 0)
        return c[n];
    c[n-1] = Rfibo(n-1, c);
    c[n] = c[n-1] + c[n-2];
    return c[n];
}

ll int fibo(int n)
{
    ll int *cache = (ll int*)malloc(sizeof(ll int)*(n+1));
    cache[0] = 0;
    cache[1] = 1;
    return Rfibo(n, cache);
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    ll int s = fibo(n);
    printf("%lld\n", s);
    return 0;
}
