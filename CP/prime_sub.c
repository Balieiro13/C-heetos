#include <stdio.h>
#define ll long long

void prime_sub(ll int x, ll int y)
{
    ll int r = x - y;
    if (r != 1)
        printf("YES\n");
    else
        printf("NO\n");
}
 
int main()
{
    int t;
    ll int x, y;
 
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%lld %lld", &x, &y);
        prime_sub(x,y);
    }
}
