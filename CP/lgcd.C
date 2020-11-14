#include <stdio.h>
#include <math.h>
#define ll unsigned long long


ll int mdc(ll int n, ll int d)
{
    if (d == 0)
        return n;

    return mdc(d, n%d);
}

ll int sujo_mdc(ll int p, ll int q)
{
    ll int k = p / mdc(p,q);
    ll int n = mdc(k, q);
    if (n == 1)
        return k;

    if (k >= q)
        return sujo_mdc(k, q);

    q /= n;
    return sujo_mdc(p, q);
}

ll int max(ll int a, ll int b)
{
    return a > b ? a : b;
}


ll int solve(ll int p, ll int q)
{
    if (p % q != 0 || p < q)
        return p;
    ll int ans = sujo_mdc(p, q);
    return ans;
}

int main()
{
    ll int t, p, q, i;
    scanf("%llu", &t);
    for (i = 0; i < t; i++){
        scanf("%llu %llu", &p, &q);
        printf("%llu\n", solve(p,q));
    }
    return 0;
}
