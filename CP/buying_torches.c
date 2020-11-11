#include <stdio.h>
#define ll long long

ll int buytorch (ll int x, ll int y, ll int k)
{
    ll int trade;
    ll int nst = k + y*k;

    trade = (nst-1)/(x-1) + k;
    if ((nst-1)%(x-1) != 0)
        trade++;

    return trade;

}

int main()
{
    int t;
    ll int x, y, k, ans;

    scanf("%d", &t);
    for (int j = 0; j < t; j++){
        scanf("%lld %lld %lld", &x, &y, &k);
        ans = buytorch(x,y,k);
        printf("%lld\n", ans);
    }

    return 0;
}
