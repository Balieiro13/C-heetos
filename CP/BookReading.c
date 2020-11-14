#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll int solve(ll int n, ll int m)
{
    ll int k, r = n - (n % m);
    k = (m + r)*(r/m) / 2;
    return k;
}

int main()
{
    int t;
    ll int n, m;
    scanf("%d", &t);
    for (int a = 0; a < t; a++){
        scanf("%llu %llu", &n, &m);
        printf("%llu\n", solve(n,m));
    }
    return 0;
}


