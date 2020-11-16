#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 0, i = 0;
    int ans = 0;
    while(ans <= n){
        k += ++i;
        ans += k;
    }
    cout << i-1 << "\n";
    return 0;
}