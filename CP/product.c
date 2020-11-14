#include <stdio.h>

int solve(int n)
{
   int arr[200000000]; 
   int i = 0;
   int num = n;
   while (num > 0){
       int r = num % 10;
       arr[i] = r;
       num = num / 10;
       i++;
   }
   int k = 1;
   for (int j = 0; j < i; j++)
       k *= arr[j];
   return k;
}

int main()
{
    int a = 304579;

    int cu = solve(a);
    printf("%d\n", cu);
    return 0;

}
