#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll int solve(ll int n, ll int m)
{
    ll int  k, j, l = (n - n % m) / m, ans = 0;
    int i = 1;
    j = m % 10;
    if (j == 0)
        return 0;
        if (j == 1 || j == 3 || j == 7 || j == 9){
        ans = 45;
        i = 10;
    }
    if (j == 2 || j == 4 || j == 6 || j == 8){
        ans = 20;
        i = 5;
    }
    if (j == 5){
        ans = 5;
        i = 2;
    }
    ans = ans * (l / i);
    k = l % i;
    for (int a = 1 ; a <= k; a++){
        ans += ((m * a) % 10);
    }
    
    return ans;
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


